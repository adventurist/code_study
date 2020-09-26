#include <cstdio>
#include <type_traits>
#include <utility>

#define First(x) std::get<0>(x)
#define Second(x) std::get<1>(x)

template <typename T>
class GeoCoordinate {
  typedef std::pair<T, T> CoordPair;

 public:
  typedef T DegreeValue;
  typedef DegreeValue Longitude;
  typedef DegreeValue Latitude;

  template <typename CType>
  struct Coordinate {
    DegreeValue degree;
    T limit;
    Coordinate(T value) : degree(value) {
      if constexpr (std::is_same_v<CType, Longitude>) {
        limit = 180;
      } else if constexpr (std::is_same_v<CType, Latitude>) {
        limit = 90;
      }
    }
    Coordinate operator+(const Coordinate& other) {
      auto long_this = *this;
      auto l1 = long_this.degree;
      auto l2 = other.degree;
      CoordPair p {l1, l2};

      if ((First(p) + Second(p)) > limit) {
        auto diff = limit - First(p);
        auto remain = Second(p) - diff;
        return (Coordinate(0 - remain));
      }
      return Coordinate(First(p) + Second(p));
    }

    Coordinate operator-(const Coordinate& other) {
      auto long_this = *this;
      auto l1 = long_this.degree;
      auto l2 = other.degree;

      CoordPair p{l1, l2};

      if ((First(p) - Second(p)) < -limit) {
        auto diff = -limit - First(p);
        auto remain = diff - Second(p);
        return Coordinate(0 - remain);
      }
      return Coordinate(First(p) - Second(p));
    }
  };
};

class GeoLocation {
  public:
  GeoLocation(GeoCoordinate<Longitude> lng, GeoCoordinate<Latitude> lat) : longitude(lng), latitude(lat) {}

  GeoCoordinate<Longitude> longitude;
  GeoCoordinate<Latitude> latitude;
};

using Geo = GeoCoordinate<int>;
using Longitude = Geo::Longitude;
using Latitude = Geo::Latitude;

int main(int argc, char** argv) {
  Geo::Coordinate<Longitude> l1{180};
  Geo::Coordinate<Longitude> l2{170};

  auto diff = l1 - l2;
  auto sum = l1 + l2;

  printf("Diff is %d\n", diff.degree);
  printf("Sum is %d\n", sum.degree);

  return 0;
}
