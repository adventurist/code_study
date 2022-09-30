#include <vector>
#include <bits/stdc++.h>


static const uint64_t MAX_64{9999999999999999999ULL};
struct MassiveInt{

MassiveInt& operator+= (const MassiveInt& m)
{
  const auto additional_value = m.GetData();
  for (int i = 0; i < additional_value.size(); i++)
  {
    auto multiplier = (i) ? (i * 20) : 1;
    while (multiplier--)
      *this += additional_value[i];
  }
  return *this;
}

MassiveInt& operator+= (const uint64_t& n)
{
  const size_t    size    = value.size();          // Total number of 64bit ints
        size_t    idx     = 0;                     // Index
        uint64_t& low_seg = value[idx];            // Value of lowest nibble
        uint64_t  space   = (MAX_64 - low_seg);    // Space in lowest nibble

  if (space >= n)                                   // If enough room
    value[idx] += n;
  else
  {
    const uint64_t addition   = (n - space);       // New value for lowest nibble
                   value[idx] = addition;
          bool     carry      = true;              // Flag to continue carrying

    while (carry)
    {
      if ((idx + 1) == size)                       // Add a 64bit integer
        value.emplace_back(0);

      carry      = (value[++idx] == MAX_64);       // If next int is FULL
      value[idx] = (carry) ? 0 : (value[idx] + 1); // 0 if carry, or increment and DONE!
    }
  }
  return *this;
}

static size_t ComputeDigits(uint64_t n)
{
  size_t digits{1};
  while (n /= 10)
    digits++;
  return digits;
}

size_t GetDigits() const
{
  static const uint64_t MAX_DIGIT{19};
               size_t   size = value.size();
               size_t   d    = 0;
  if (size--)
  {
    d += ComputeDigits(value.front());
    for (auto i = 0; i < size; i++)
      d += (i) ? (MAX_DIGIT *  (i * 10)) : MAX_DIGIT;
  }
  return d;
}

std::vector<uint64_t> GetData() const
{
  return value;
}

private:
std::vector<uint64_t> value{0};
};
