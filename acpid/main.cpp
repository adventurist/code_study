#include <sys/socket.h>
#include <sys/un.h>
#include <future>
#include <iostream>
#include <unistd.h>
#include <thread>

namespace constants {
static const size_t SUN_PATH_SIZE = 108;
static const char*  ACPI_AC    = "ac_adapter ACPI";
static const char*  ACPI_BAT   = "battery PNP";
static const char*  ACPI_SLP1  = "button/sleep SBTN";
static const char*  ACPI_SLP2  = "button/sleep PNP";
} // ns constants
///////////////////////////////////////////////////////
enum class acpi_events
{
  sleep   = 0x00,
  wake    = 0x01,
  unknown = 0x02
};
///////////////////////////////////////////////////////
acpi_events get_acpi_event(const std::string& name)
{
  if (name.find(constants::ACPI_AC)   != std::string::npos) return acpi_events::wake;
  if (name.find(constants::ACPI_BAT)  != std::string::npos) return acpi_events::wake;
  if (name.find(constants::ACPI_SLP1) != std::string::npos) return acpi_events::sleep;
  if (name.find(constants::ACPI_SLP2) != std::string::npos) return acpi_events::sleep;
  return acpi_events::unknown;
}

class sleep_event_listener {
public:
void run()
{
  std::cout << "Init Sleep Event Listener" << std::endl;
  m_sock = socket(AF_UNIX, SOCK_STREAM, 0);
  if (m_sock >= 0)
  {
    m_acpid_addr.sun_family = AF_UNIX;
    strcpy(m_acpid_addr.sun_path,"/var/run/acpid.socket");
    if (connect(m_sock, (struct sockaddr *)&m_acpid_addr, constants::SUN_PATH_SIZE) < 0 )
    {
      close(m_sock);
      m_sock = -1;
      std::cerr << "Failed to connect to ACPID socket!" << std::endl;
    }
  }
  std::cout << "ACPID socket register complete" << std::endl;
  m_acpid_sock_future = std::async(std::launch::async, [this]() { return poll(); });

  while (m_running) ;
}

void poll()
{
  static const size_t BUF_SIZE = 1024;
  std::cout << "ACPID poll with acpid socket" << std::endl;

  while (true)
  {
    char buf[BUF_SIZE];
    int  s = recv(m_sock, buf, sizeof(buf), 0);
    if (s > 1)
    {
      std::string acpid_message{buf, buf + s};
      std::cout << "Bytes received: " << s << '\n' <<
                   "Message: "        << acpid_message << std::endl;

      switch (get_acpi_event(acpid_message))
      {
        case (acpi_events::sleep): std::cout << "Going to sleep!" << std::endl; break;
        case (acpi_events::wake):  std::cout << "Waking up!"      << std::endl; break;
        default:                   std::cout << "Unknown event"   << std::endl; break;
      }
    }
  }
  std::cout << "No longer reading ACPID socket" << std::endl;
}

private:

int               m_sock;
sockaddr_un       m_acpid_addr;
bool              m_running{true};
std::future<void> m_acpid_sock_future;
};

int main(int argc, char* argv[])
{
  sleep_event_listener listener{};
  listener.run();

  return 0;
}