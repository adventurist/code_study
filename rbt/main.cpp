#include <thread>
#include "rbt.hpp"
#include <chrono>

void wait()
{
  std::this_thread::sleep_for(std::chrono::milliseconds(200));
}

int main(int argc, char* argv[])
{

  try
  {
    RBT tree{};

    tree.Insert(2);
    tree.Insert(3);
    tree.Insert(1);
    tree.Insert(56);
    tree.Insert(45);
    tree.Insert(7);
    tree.Insert(92);
    tree.Insert(17);
    tree.Insert(8);
    tree.Insert(9);
    tree.Insert(11);
    tree.Insert(6);
    tree.Insert(21);
    tree.Insert(47);
    tree.Insert(41);
    tree.Insert(61);
    tree.Insert(4);
    tree.Print();

    wait();

    tree.Delete(92);
    tree.Delete(17);
    tree.Print();
    wait();
    tree.Delete(1000);
  }
  catch (const std::exception& e)
  {
    log("Exception thrown: ", e.what());
  }

  return 0;
}