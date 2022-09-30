#include <functional>
#include <iostream>
#include <vector>
#include <future>
#include <chrono>
#include <string>
#include <thread>

template <typename T = std::function<void(std::string)>>
class observable
{
public:
  observable() = default;

  void add_observer(T fn)
  {
    m_observers.push_back(fn);
  }

  void on_change()
  {
    for (const auto& o : m_observers)
      o(std::string{"Value is " + std::to_string(m_value)});
  }

  void set_value(int i)
  {
    if (m_value != i)
    {
      m_value = i;
      on_change();
    }
  }

private:
  using observers_t = std::vector<T>;

  observers_t m_observers;
  int         m_value{0};
};

template <typename T = std::function<void(std::string)>>
class thing
{
public:
  thing()
  : m_future(std::async(std::launch::async, [this]
    {
      int i = 90;
      for (;;)
      {
        m_observable.set_value(i++);
        std::this_thread::sleep_for(std::chrono::seconds(1));
        if (i > 100)
          return;
      }
    }))
  {}
  ~thing()
  {
    if (m_future.valid())
      m_future.wait();
  }

  void add_observer(T fn)
  {
    m_observable.add_observer(fn);
  }

private:
  using future_t = std::future<void>;

  observable<T> m_observable;
  future_t      m_future;
};

void notification(std::string msg)
{
  std::cout << "Notification function called with " << msg << std::endl;
}

int main()
{
  thing thing;
  thing.add_observer([](auto msg) { notification(msg); });
  thing.add_observer([](auto msg) { std::cout << "Lambda observer called with " << msg << std::endl; });

  return 0;
}
