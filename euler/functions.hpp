#include <unordered_map>
#include <iostream>
#include <bits/stdc++.h>
#include <tuple>
#include <cmath>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

#include "massive_int.hpp"

static void fibonacci_even_numbers()
{
  const int max_num{4000000};
  int64_t a{1}, b{2};
  int64_t sum{};
  for (int i = 0; b <= max_num; i++)
  {
    if (!(b % 2))
      sum += b;
    const int temp = b;
    b = (a + b);
    a = temp;
  }
  std::cout << sum;
}

#include <type_traits>

template <typename T>
static void CheckIntegral()
{
  static_assert(std::is_integral<T>::value, "Is not integral");
}

template <typename T>
static bool IsPrime(T n)
{
  CheckIntegral<T>();
  for (T i = 2; i < n; i++)
    if (!(n % i) && n != i)
      return false;
  return true;
}

template <typename T>
static T FindMaxPrimeFactor(T n)
{
  CheckIntegral<T>();
  if (n == 1 || n == 2)
    return false;
  for (T i = n; i > 1; i--)
    if (IsPrime(i))
      return i;
}

template <typename T>
static uint64_t SumPrimesBelowN(T n)
{
  CheckIntegral<T>();
  uint64_t sum{};
  for (int i = 0; i < n; i++)
    if (IsPrime(i))
      sum += i;
  return sum;
}

uint64_t MaxPrimeFactor(uint64_t n)
{
  uint64_t max = -1;

  // Print the number of 2s that divide n
  while (!(n % 2))
  {
    max = 2;
    n = (n / 2);
  }

  while (!(n % 3))
  {
    max = 3;
    n = (n / 3);
  }

  for (int i = 5; i <= sqrt(n); i += 6) // match where `i` does not have prime factors 2 and 3
  {
    while (!(n % i))
    {
      max = i;
      n = (n / i);
    }

    while (!(n % (i + 2)))
    {
      max = (i + 2);
      n = (n / (i + 2));
    }
  }

  // This condition is to handle the case
  // when n is a prime number greater than 4
  if (n > 4)
    max = n;

  return max;
}

static void LargestPrimeFactor()
{
  auto prime = MaxPrimeFactor(600851475143);
  std::cout << prime << std::endl;
}

static bool IsPalindrome(uint64_t n)
{
  uint64_t reverse{}, remain{};
  uint64_t t = n;
  while (t)
  {
    remain  = (t % 10);
    reverse = (reverse * 10 + remain);
    t       = (t / 10);
  }

  return (reverse == n);
}

void PalindromeOf3DigitProduct()
{
  int a{999}, b{999};
  int max{};
  while (!max)
  {
    max = (IsPalindrome(a * b) ? (a * b) : 0);
    if (max)
      std::cout << "Product of: " << a << ' ' << b << std::endl;
    (b > a) ? (b--) : (a--);
  }

  std::cout << max << std::endl;
}

bool CheckPalindrome()
{
  const char* characters{"abcddcba"};
  const int   num{8};
  int   mid   = num / 2;
  for (int i = 0; i < mid; i++)
    if (characters[i] != characters[(num - 1 - i)])
      return false;

  return true;
}
void PalindromeTest()
{
  auto result = CheckPalindrome();
}

void DivisibleByOneToTwenty()
{
  int i{20};

  for (; !(!(i % 1)  &&
           !(i % 2)  &&
           !(i % 3)  &&
           !(i % 4)  &&
           !(i % 5)  &&
           !(i % 6)  &&
           !(i % 7)  &&
           !(i % 8)  &&
           !(i % 9)  &&
           !(i % 10) &&
           !(i % 11) &&
           !(i % 12) &&
           !(i % 13) &&
           !(i % 14) &&
           !(i % 15) &&
           !(i % 16) &&
           !(i % 17) &&
           !(i % 18) &&
           !(i % 19) &&
           !(i % 20));)
    i++;

  std::cout << i << std::endl;
}

void SumSquareDiff()
{
  int64_t sum{}, sq_sum{};
  for (int i = 1; i <= 100; i++)
  {
    sum += i;
    sq_sum += (i * i);
  }
  std::cout << ((sum * sum) - sq_sum) << std::endl;
}

static bool IsPerfectSQ(int n)
{
  int rt = sqrt(n);
  return ((rt * rt) == n);
}

static bool AreTriangle(int a, int b, int c)
{
  int a_sq = (a*a);
  int b_sq = (b*b);
  int c_sq = (c*c);

  return (
    (a_sq + b_sq) == c_sq ||
    (b_sq + c_sq) == a_sq ||
    (a_sq + c_sq) == b_sq
  );
}

static std::tuple<int, int, int> FindRootSides(int n)
{
  int a{0}, b{0}, c{0};
  for (int i = 1; i < 1000; i++)
  {
    a = i;
    for (int j = 2; j < 1000; j++)
    {
      b = j;
      c = (n - a - b);
      if (AreTriangle(a, b, c))
        return std::make_tuple(a, b, c);
    }
  }
  throw std::invalid_argument{"Value is not sum of sides in a triangle"};
}

static const std::vector<std::vector<int>> twenty_grid{
{8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91,8},
{49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00},
{81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
{52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
{22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
{24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
{32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
{67,26,20,68,02,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21},
{24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
{21,36,23,9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
{78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14,9,53,56,92},
{16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},
{86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},
{19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
{04,52,8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},
{88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
{04,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36},
{20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
{20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
{01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48}
};

int64_t largest_vector()
{
  int64_t result{0};
  for (int i = 0; i < 20; i++)
  {
    int64_t right      = (i > 15) ? 0 :
                         twenty_grid[i    ][i     ] *
                         twenty_grid[i + 1][i     ] *
                         twenty_grid[i + 2][i     ] *
                         twenty_grid[i + 3][i     ];
    int64_t left       = (i < 3) ? 0 :
                         twenty_grid[i    ][i    ] *
                         twenty_grid[i    ][i - 1] *
                         twenty_grid[i    ][i - 2] *
                         twenty_grid[i    ][i - 3];

    int64_t down       = (i > 15) ? 0 :
                         twenty_grid[i     ][i    ] *
                         twenty_grid[i     ][i + 1] *
                         twenty_grid[i     ][i + 2] *
                         twenty_grid[i     ][i + 3];

    int64_t up         = (i < 3) ? 0 :
                         twenty_grid[i    ][i    ] *
                         twenty_grid[i - 1][i    ] *
                         twenty_grid[i - 2][i    ] *
                         twenty_grid[i - 3][i    ];

    int64_t d_right    = (i > 15) ? 0 :
                         twenty_grid[i    ][i    ] *
                         twenty_grid[i + 1][i + 1] *
                         twenty_grid[i + 2][i + 2] *
                         twenty_grid[i + 3][i + 3];

    int64_t d_left     = (i < 3) ? 0 :
                         twenty_grid[i    ][i    ] *
                         twenty_grid[i - 1][i - 1] *
                         twenty_grid[i - 2][i - 2] *
                         twenty_grid[i - 3][i - 3];

    int64_t horizontal = (right  > left   ) ? right  : left;
    int64_t vertical   = (up     > down   ) ? up     : down;
    int64_t diagonal   = (d_left > d_right) ? d_left : d_right;

    int64_t largest = (horizontal > vertical) ?
                        (horizontal > diagonal) ?
                          horizontal : diagonal
                        :
                        (vertical > diagonal) ?
                          vertical : diagonal;
    result = (largest > result) ? largest : result;
  }

  return result;
}

int64_t TriangleNumberForDivisibles(int n)
{

  int64_t triangle_number = 1;
  for (int i = 1; ; i++)
  {
    if (i >= n)
    {
      int divisors = 0;
      triangle_number += i;
      for (int j = 1; j < triangle_number; j++)
        if (!(triangle_number % j) && (++divisors == n))
          return triangle_number;
    }
  }
  return 0;
}

std::vector<uint64_t> big_digits{
3710728753390,
4637693767749,
7432498619952,
9194221336357,
2306758820753,
8926167069662,
2811287981284,
4427422891743,
4745144573600,
7038648610584,
6217645714185,
6490635246274,
9257586771833,
5820356532535,
8018119938482,
3539866437282,
8651550600629,
7169388870771,
5437007057682,
5328265410875,
3612327252500,
4587657617241,
1742370690585,
8114266041808,
5193432545172,
6246722164843,
1573244438690,
5503768752567,
1833638482533,
8038628759287,
7818283375799,
1672632010043,
4840309812907,
8708698755139,
5995940689575,
6979395067965,
4105268470829,
6537860736150,
3582903531743,
9495375976510,
8890280257173,
2526768027607,
3627021854049,
2407448690823,
9143028819710,
3441306557801,
2305308117281,
1148769693215,
6378329949063,
6772018697169,
9554825530026,
7608532713228,
3777424253541,
2370191327572,
2979886027225,
1849570145487,
3829820378303,
3482954382919,
4095795306640,
2974615218550,
4169811622207,
6246795719440,
2318970677254,
8618808822587,
1130673970830,
8295917476714,
9762333104481,
4284628018351,
5512160354698,
3223819573432,
7550616496518,
6217784275219,
3292418570714,
9951867143023,
7326746080059,
7684182252467,
9714261791034,
8778364618279,
1084880252167,
7132961247478,
6218407357239,
6662789198148,
6066182629368,
8578694408955,
6602439640990,
6491398268003,
1673093931987,
9480937724504,
7863916702118,
1536871371193,
4078992311553,
4488991150144,
4150312888033,
8123488067321,
8261657077394,
2291880205877,
7715854250201,
7210783843506,
2084960398013,
5350353422647
};

uint64_t GetBigDigitSum()
{
  uint64_t sum{};
  for (const uint64_t& v : big_digits)
    sum += v;

  return sum;
}

/**
 * 1. For even numbers: f(x) = x/2
 * 2. For odd  numbers: f(x) = 3n + 1
 * 3. All sequences lead to 1
 * 4. For n < 1,000,000:
 *  ``` Find the longest chain ```
 */
uint32_t LongestCollatzSequence()
{
  const uint32_t ONEMILLION = 1000000;
  u_int64_t length{};
  uint32_t start_n{};
  for (uint32_t i = 1; i < ONEMILLION; i++)
  {
    uint64_t n, j;
    for (n = i, j = 0; n != 1; j++)
      n = (!(n % 2)) ? (n / 2) : ((3 * n) + 1);

    if (j > length)
    {
      length  = j;
      start_n = i;
    }
  }

  return start_n;
}

bool RunningSum(std::vector<int> arr)
{
  int sum{};
  for (int i = 0; i < arr.size(); i++, sum += arr[i])
    if (sum >= arr[i]) return false;
  return true;
}
// uint64_t FindNumOfPaths(uint64_t x, uint64_t y)
// {
//   uint64_t digits = (x + y);
//   uint64_t permutations{digits};
//   while (true)
//   {
//     --digits;
//     permutations *= digits;
//     if (digits == (x + 1) || digits == (y - 1))
//       break;
//   }
//   permutations = (permutations / (x * y));
//   return permutations;
// }

uint64_t FindNumOfPaths(uint64_t x, uint64_t y)
{
  const auto GetCombinations = [](uint64_t x, uint64_t cutoff) -> uint64_t
  {
    uint64_t value{x};
    uint64_t combinations{x};
    while (--value > cutoff)
    {
      combinations *= value;
      // if (value == cutoff)
      //   break;
    }
    return combinations;
  };
  const uint64_t higher      = (x > y) ? x : y;
  const uint64_t lower       = (x < y) ? x : y;
  const uint64_t numerator   = GetCombinations((x + y), (x == y) ? (higher - 1) : higher);
  const uint64_t denominator = (x == y) ? (x * y) : GetCombinations(lower, 1);
  const uint64_t result      = (numerator / (x * y));
  return result;
}

// uint32_t FindNumPathsToZero(int x = 4, int y = 4)
// {
//   int counter{};
//   // for (; x >= 0; x--)
//   // {
//   //   counter++;
//   //   for (; y >= 0; y--)
//   //     counter++;
//   // }
//   // return counter;

//   bool all_reached{false};
//   int i = 0, j = 0;

//   while (!all_reached)
//   {
//     all_reached = (i == x) && (j == y);

//     if (i == j)
//     {
//       i++;
//     }
//     else
//       j++;
//     counter++;
//   }

//   return counter;
// }

uint64_t PowerDigitSum(uint64_t power)
{
  int digits[350];
  memset(digits, 0, 350);
  digits[0] = 1;

  for (int i = 0; i < power; i++)
  {
    for (int j = 348; j >= 0; j--)
    {
      digits[j]     *= 2;
      digits[j + 1] += digits[j] / 10;
      digits[j]     %= 10;
    }
  }
  uint64_t number{0};
  for (int i = 0; i < 350; i++)
    number += digits[i];

  return number;
}

uint64_t NumberLetterCounts()
{
  const auto GetTen = [](uint64_t n)
  {
    if (n < 10)
      return 0;
    if (n < 20)
      return 10;
    if (n < 30)
      return 20;
    if (n < 40)
      return 30;
    if (n < 50)
      return 40;
    if (n < 60)
      return 50;
    if (n < 70)
      return 60;
    if (n < 80)
      return 70;
    if (n < 90)
      return 80;
    if (n < 100)
      return 90;
    return 0;
  };
  const auto GetHundred = [](uint64_t n)
  {
    if (n < 100)
      return 0;
    if (n < 200)
      return 100;
    if (n < 300)
      return 200;
    if (n < 400)
      return 300;
    if (n < 500)
      return 400;
    if (n < 600)
      return 500;
    if (n < 700)
      return 600;
    if (n < 800)
      return 700;
    if (n < 900)
      return 800;
    if (n < 1000)
      return 900;
    return 0;
  };
  using map = std::unordered_map<uint64_t, uint64_t>;
  const        uint64_t AND{99};
  const        uint64_t HUNDRED{100};
  const        uint64_t THOUSAND{1000};
  static const map      NUM_MAP{{1, 3}, {2, 3}, {3, 5}, {4, 4}, {5, 4}, {6, 3}, {7, 5}, {8, 5}, {9, 4},{10, 3},{11, 6},{12, 6},{13, 8},{14, 8},{15, 7},{16, 7},{17, 9},{18, 9},{19, 8},{20, 6}, {30, 6}, {40, 5}, {50, 5}, {60, 5}, {70, 7}, {80, 7}, {90, 6}, {100, 7}, {1000, 8}, {0, 0}, {99, 3}};
  bool is_thousand{false}, is_hundred{false}, is_single{false}, is_ten{false};
  uint64_t count{};

  for (uint64_t i = 1; i <= 1000; i++)
  {
    is_single   = (i < 10);
    is_ten      = (i > 9 && i < 100);
    is_hundred  = (i > 99 && i < 1000);
    is_thousand = (i == 1000);

    if (is_single)
      count += NUM_MAP.at(i);
    if (is_ten)
    {
      uint64_t ten_digit    = GetTen(i);
      uint     single_digit = (i % 10);

      if (i < 20)
        count += (NUM_MAP.at(i));
      else
        count += (single_digit) ?
          (NUM_MAP.at(ten_digit) + NUM_MAP.at(single_digit)) :
          (NUM_MAP.at(ten_digit));
    }

    if (is_hundred)
    {
      uint64_t hundred_digit = (GetHundred(i) / 100);
      uint64_t ten_digit     = (GetTen(i % 100));
      uint     single_digit  = (i % 10);

      count += NUM_MAP.at(hundred_digit) + NUM_MAP.at(HUNDRED);

      if (ten_digit || single_digit)
        count += NUM_MAP.at(AND);

      if (ten_digit && ten_digit < 20)
        count += NUM_MAP.at((ten_digit + single_digit));
      else
        count += NUM_MAP.at(ten_digit) + NUM_MAP.at(single_digit);
    }

    if (is_thousand)
      count += NUM_MAP.at(1) + NUM_MAP.at(THOUSAND);
  }

  return count;
}

int int_log2(uint32_t x) { return 31 - __builtin_clz(x|1); }
int fast_digit_count(uint32_t x) {
  static uint64_t table[] = {
      4294967296,  8589934582,  8589934582,  8589934582,  12884901788,
      12884901788, 12884901788, 17179868184, 17179868184, 17179868184,
      21474826480, 21474826480, 21474826480, 21474826480, 25769703776,
      25769703776, 25769703776, 30063771072, 30063771072, 30063771072,
      34349738368, 34349738368, 34349738368, 34349738368, 38554705664,
      38554705664, 38554705664, 41949672960, 41949672960, 41949672960,
      42949672960, 42949672960};
  return (x + table[int_log2(x)]) >> 32;
}

uint64_t DivisorSum(uint64_t n)
{
  uint64_t sum{};
  for (uint64_t i = 1; i < n; i++)
    if (!(n % i)) sum += i;
  return sum;
}

uint64_t SumDigits()
{
  uint64_t n{100};
  uint64_t d{};
  uint64_t sum{};

  for (int i = 99; i > 0; i--)
    n *= i;
  int num_digits = fast_digit_count(n);

  for (int i = 1; i < num_digits; i++)
  {
    d   =  (10 * (num_digits - 1));
    sum += ((n / d) % 10);
  }
  sum += (n % 10);

  return sum;
}

uint64_t AmicableNumbers()
{
  uint64_t n{10000};
  uint64_t sum{};
  for (uint64_t i = 1; i < n; i++)
  {
    uint64_t div_sum = DivisorSum(i);
    uint64_t d_d_sum = DivisorSum(div_sum);
    if (d_d_sum == i)
      sum += (div_sum + d_d_sum);
  }

  return sum;
}

bool IsAbundant(uint64_t n)
{
  return DivisorSum(n) > n;
}

bool IsDeficient(uint64_t n)
{
  return DivisorSum(n) < n;
}

bool IsPerfect(uint64_t n)
{
  return DivisorSum(n) == n;
}

bool IsSumOfAbundantNumbers(const std::vector<uint64_t>& abundant_numbers, uint64_t n)
{
  for (const auto& x : abundant_numbers)
    for (const auto& y : abundant_numbers)
     if ((x + y) == n)
      return true;
  return false;
}

uint64_t SumOfIntsNotSumOfAbundant()
{
  static const uint64_t LIMIT{28123};
  uint64_t              sum{};
  std::vector<uint64_t> abundant_numbers{};
  for (uint64_t i = 1; i < LIMIT; i++)
  {
    bool is_sum_of_abundant_numbers{false};
    if (IsAbundant(i)) abundant_numbers.push_back(i);
    if (!IsSumOfAbundantNumbers(abundant_numbers, i))
      sum += i;
  }
  return sum;
}

uint64_t permutation_counter{};

// uint64_t* GetPermutations(uint64_t a[], uint64_t start)
// {
//   if (start == 9)
//     return (a);
//   for (uint64_t i = start; i < 10; i++)
//   {
//     permutation_counter++;
//     uint64_t t = a[i];
//     a[i]       = a[start];
//     a[start]   = t;
//     GetPermutations(a, start + 1);
//   }
//   return a;
// }

std::vector<std::vector<uint64_t>> GetPermutations(std::vector<uint64_t> digits)
{
  using Vector      = std::vector<uint64_t>;
  using MultiVector = std::vector<Vector>;

  if (digits.size() == 1) return MultiVector{digits};

  MultiVector result{};
  {
    for (int i = 0; i < digits.size(); i++)
    {
      Vector v{digits.begin(), digits.end()};
      v.erase(v.begin() + i);

      const MultiVector r = GetPermutations(v);

      for (int j = 0; j < r.size(); j++)
      {
        Vector _v = r[j];
        _v.insert(_v.begin(), digits[i]);
        result.push_back(_v);
      }
    }
  }

  return result;
}

uint64_t LexicographicPermutation()
{

  std::vector<uint64_t> digits{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  const auto            permutations   = GetPermutations(digits);
  const auto            my_permutation = permutations.at(999999);
  uint64_t result{};

  for (int i = 0; i < 10; i++)
  {
    const auto value      = my_permutation.at(10 - (i + 1));
    const auto multiplier = (!i) ? 1 : std::pow(10, i);
    result += (value * multiplier);
  }

  return result;
}


long carParkingRoof(std::vector<long> cars, int k) {
    long result{(cars.back() - cars.front())};
    long length{};
    int  count{};

    int  start_index{0};
    int  car_num   = cars.size();
    long last_car  = {cars.front()};

    std::sort(cars.begin(), cars.end(), [](const long& a, const long&b) { return a < b; });

    for (int i = 0; i + k < car_num; i++)
    {

        long length = (cars.at(i + (k - 1)) - cars.at(i));
        if (length < result)
          result = length;
    }
  return result;
}

int maxEvents2(std::vector<int> arrival, std::vector<int> duration)
{
    struct BusyTime{
        int start;
        int end;
    };

    int n = static_cast<int>(arrival.size());
    std::vector<BusyTime> busy_times{};
    int max_presentations{};

    for (int i = 0; i < n; i++)
        busy_times.push_back({BusyTime{
            arrival.at(i),
            arrival.at(i) + duration.at(i)}});

    for (int i = 0; i < n; i++)
    {
        int  arrival_time = arrival.at(i);
        int  stay_time    = duration.at(i);
        int  end_time     = arrival_time + stay_time;
        bool conflict{false};

        if (!busy_times.empty())
        {
            int conflict_num{};
            for (int j = 0; j < busy_times.size(); j++)
            {
                int  busy_start = busy_times.at(j).start;
                int  busy_end   = busy_times.at(j).end;
                if ((busy_start <= arrival_time) && (end_time < busy_end))
                  conflict_num++;
                if (conflict_num > 1)
                  conflict = true;

                if (conflict) break;
            }
        }

        if (!conflict)
            max_presentations++;
    }

    return max_presentations;
}

int MaxEvents(std::vector<int> arrival, std::vector<int> duration)
{
  std::vector<int> busy_times{};
  int              max_presentations{};
  int              n{arrival.size()};

  for (int i = 0; i < n; i++)
  {
    int  arrival_time = arrival.at(i);
    int  stay_time    = duration.at(i);
    int  end_time     = arrival_time + stay_time;
    bool conflict     = false;

    if (!busy_times.empty())
      for (int j = 0; j < (busy_times.size() / 2); j++)
      {
        int  busy_start = busy_times.at(j * 2);
        int  busy_end   = busy_times.at((j * 2 + 1));
             conflict   = ((arrival_time <= busy_start) && (end_time < busy_end));

        if (conflict) break;
      }

    if (!conflict)
    {
      busy_times.push_back(arrival_time);
      busy_times.push_back(end_time);
      max_presentations++;
    }
  }

  return max_presentations;
}

void TestMassiveInt()
{

  MassiveInt massive{};
  while (massive.GetDigits() < 1000)
    massive += (MAX_64 / 2);
  auto digits = massive.GetDigits();
  return;
}
uint64_t FibonacchMe()
{
  TestMassiveInt();
  const auto NumDigits = [](uint64_t n) -> uint64_t
  {
    uint64_t digits{};
    while (n)
    {
      digits++;
      n /= 10;
    }
    return digits;
  };

  uint64_t a{0}; uint64_t b{1}; uint64_t num_digits{0};

  while (num_digits < 1000)
  {
    const uint64_t f = a + b;
    a = b;
    b = f;
    num_digits = NumDigits(f);
  }

  return b;
}


/*
* // Moving Median //
*           Computes moving median for each element and its predecessors (n - 1)
*
* @param   [in]  {std::vector<int>}
* @returns [out] {std::vector<int>} The moving median values
* Notes:
* - First element  = sliding size (n in range)
* - Other elements = size values
* - If insufficient number of predecessors to compute range, use the number available
*
*  EXAMPLE:
*       INPUT:  [3, 1, 3, 5, 10, 6, 4, 3, 1]
*       OUTPUT: [1, 2, 3, 5, 6, 6, 4, 3]
*
*       INPUT:  [3, 0, 0, -2, 0, 2, 0, -2]
*       OUTPUT: [0, 0, 0, 0, 0, 0, 0]
*
*       INPUT:  [6, 2, 4, 6, 32, 8, 2, -12, 4, 6]
*       OUTPUT: [2, 3, 4, 5, 6,  5, 5,  5,  5]

1. For input new int[] {4, 2, 4, 6, 32, 8, 2, -12, 4, 6} the output was incorrect.
  The correct output is{2, 3, 4, 5, 7, 7, 5, 3, 3
*/

std::vector<int> MovingMedian(std::vector<int> argv)
{
  const auto range = argv.front();
}

void MedianSeries()
{
  const int              computation_range{3};
  const std::vector<int> window_size_values{1, 3, 5, 10, 6, 4, 3, 1};
  const int              window_values_num{8};
        std::vector<int> argv{computation_range};
  for (auto v : window_size_values) argv.emplace_back(v);

  auto result = MovingMedian(argv);
}

void TestBitwise()
{
  static const uint8_t bit_X{0xFF};
  static const uint8_t bit_0{0x00};
  static const uint8_t bit_1{0x01};
  static const uint8_t bit_2{0x02};
  static const uint8_t bit_3{0x04};

  uint8_t bit_n = (
    bit_0 & bit_X | //  0 +
    bit_1 & bit_X | //  1 +
    bit_2 & bit_X | //  2 +
    bit_3 & bit_X); //  4   = 7
}

bool ShouldSwap(std::vector<int> list, int i)
{
  bool last_value_bigger   = (list.back() > i);
  bool more_than_one_val   = (list.size() > 1);
  bool second_last_smaller = (list[list.size() - 2] < i);

  return (more_than_one_val && last_value_bigger && second_last_smaller);
}

void TestLists()
{
  std::vector<int>                          input{10, 12, 4, 6, 100, 2, 56, 34, 79, 45, 33, 12, 45, 67, 89};
  std::unordered_map<int, std::vector<int>> lists;
  int                                       top_index{}, biggest_size{};
  std::unordered_map<int, int>              indexes{};         // Max value for each running list

  for (int i : input)
  {
    if (lists.find(i) == lists.end())
    {
      lists  .insert({i, std::vector<int>{i}});
      indexes.insert({i, i});
    }

    for (auto& [index, max] : indexes)
    {
      if (i > max)
      {
        lists  .at(index).emplace_back(i);
        indexes.at(index) = i;

        if (lists.at(index).size() > biggest_size)
        {
          top_index    = index;
          biggest_size = lists.at(index).size();
        }
      }
      else
      {
        auto& list = lists.at(index);
        if (ShouldSwap(list, i))
        {
          list.back()       = i;
          indexes.at(index) = i;
        }
      }
    }
  }

  assert(biggest_size == lists.at(top_index).size());
}

void MakeBigInts()
{
  auto big = MAX_64;
  auto med = (MAX_64 / 2);
  auto sml = (MAX_64 / 8);

  MassiveInt a{}, b{}, c{}, d{};

  a += big;
  b += med;
  c += sml;
  d += big;

  a += b;
  a += c;
  a += d;

  auto   data   = a.GetData();
  size_t digits = a.GetDigits();
  std::cout << "Number of digits is " << digits << std::endl;

}

void flip_bits()
{
  unsigned int n = 0xFFFFFFFEL;
  unsigned int x = 0;
  for (int i = 0; i < 32; i++)
    if (n & (0x01 << i))
      x &= (~(0x01 << i));
    else
      x |= (0x01 << i);
}
