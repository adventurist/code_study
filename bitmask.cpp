#include <bitset>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

template <class T>
class range {
 private:
  class iter {
   private:
    T at;

   public:
    iter(T at) : at(at) {}
    bool operator!=(iter const& other) const { return at != other.at; }
    T const& operator*() const { return at; }
    iter& operator++() {
      ++at;
      return *this;
    }
  };
  T begin_val;
  T end_val;

 public:
  range(T begin_val, T end_val) : begin_val(begin_val), end_val(end_val) {}
  iter begin() { return iter(begin_val); }
  iter end() { return iter(end_val); }
};

template <typename T>
static std::string toBinaryString(const T& x) {
  std::stringstream ss;
  ss << std::bitset<sizeof(T) * 8>(x);
  return ss.str();
}

std::vector<uint32_t> masks{
    0x00000001 & 0xff, 0x00000002 & 0xff, 0x00000003 & 0xff, 0x00000004 & 0xff,
    0x00000005 & 0xff, 0x00000006 & 0xff, 0x00000007 & 0xff, 0x00000008 & 0xff,
    0x00000009 & 0xff, 0x0000000A & 0xff, 0x0000000B & 0xff, 0x0000000C & 0xff,
    0x0000000D & 0xff, 0x0000000E & 0xff, 0x0000000F & 0xff, 0x00000010 & 0xff};

uint32_t some_number = 0x0000021D;

void hasNthBitSet(int value, int n) {
  auto result = value & (1 << (n - 1));
  if (result) {
    std::cout << std::hex << " has bit " << n << " set";
  }
}

void printMasks() {
  for (const auto& value : masks) {
    std::cout << "Decimal: " << std::to_string(value) << std::endl;
    std::cout << "Binary: " << toBinaryString(value) << std::endl;
    std::cout << "Hex: " << std::hex << value << std::endl;

    for (const auto& i : range<int>(0, 6)) {
      hasNthBitSet(value, i);
    }
    std::cout << "\n" << std::endl;
  }
}

void checkIfAllBitsSet() {
  for (const uint32_t& value : masks) {
    if ((value & some_number) == value) {
      std::cout << std::hex << value << " has all bits set with " << std::hex
                << some_number << std::endl;
    }
  }
}

void checkIfAnyBitIsSet() {
  for (const uint32_t& value : masks) {
    auto shift = (1 << (value - 1));
    auto comparison = some_number & (1 << (value - 1));
    if (comparison) {
      std::cout << +some_number << " has bit(s) set with" << std::hex << value
                << std::endl;
    }
  }
}

int main(int argc, char** argv) {
  std::cout << "Our number: " << std::hex << some_number << "   |   "
            << std::to_string(+some_number) << "\n"
            << toBinaryString(some_number) << std::endl;

  std::cout << "Masks\n____________________\n" << std::endl;
  printMasks();

  std::cout << "Any bits set?\n\n" << std::endl;
  checkIfAnyBitIsSet();

  std::cout << "\n\nAll bits set?\n" << std::endl;
  checkIfAllBitsSet();
  return 0;
}

