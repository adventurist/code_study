#include <iostream>

inline uint32_t calculateTimeOfDay(uint32_t timestamp) {
  auto seconds_of_today = timestamp % 86400;
  std::cout << "Seconds of today: " << seconds_of_today << std::endl;
  double percent_of_day = seconds_of_today / 86400;
  std::cout << "Percent of day: " << percent_of_day << std::endl;
  auto seconds_passed = percent_of_day * 86400;
  double hours_passed = seconds_passed / 3600;
  std::cout << "Hours passed today: " << hours_passed << std::endl;
  int percent_past_hour = (int)seconds_passed % 3600;
  double seconds_past_hour = percent_past_hour * 60;
  std::cout << "Seconds past the hour: " << seconds_past_hour << std::endl;
  double minutes_past_hour = seconds_past_hour / 60;
  std::cout << "Minutes past the hour: " << minutes_past_hour << std::endl;
  std::cout << hours_passed << ":" << minutes_past_hour << std::endl;
  return (uint32_t)seconds_passed;
}

int main() {
  uint32_t timestamp = 1593782860;
  uint32_t time_of_day = calculateTimeOfDay(timestamp);

  return 0;
}
