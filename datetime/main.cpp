#include <ctime>
#include <iomanip>
#include <sstream>
#include <string>
#include <iostream>

static const std::time_t to_unixtime(const std::string& datetime, const char* pattern = "%a %b %d %H:%M:%S +0000 %Y")
{
  std::tm            t{};
  std::istringstream ss{datetime};

  ss >> std::get_time(&t, pattern);

  return mktime(&t);
}

const std::string datetime{"Sat Oct 09 00:58:39 +0000 2021"};

int main(int argc, char* argv[])
{

  std::time_t time = to_unixtime(datetime);

  std::string tm_s = std::to_string(time);

  std::cout << tm_s << std::endl;

  return 0;
}

