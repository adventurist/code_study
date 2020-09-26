#include <iostream>
#include <memory>
#include <algorithm>

class VDI;

typedef std::shared_ptr<VDI> UPt;

class VDI {
  public:
    VDI() {
      std::cout << "constructed VDI" << std::endl;
    }

    ~VDI() {
      std::cout << "destroying VDI" << std::endl;
    }
};

UPt get_unique() {
  UPt p{new VDI};
  return std::move(p);
}

void process(UPt p) {
  std::cout << "processing" << std::endl;
}

class PUser {
  public:
    PUser(UPt v) : m_vdi(v) {};
  private:
    UPt m_vdi;
};

void check_count(UPt p) {
  auto count = p.use_count();
  std::cout << "Count: " << count << std::endl;
}

int main(int argc, char** argv) {
  UPt p = get_unique();
  PUser user1{p};
  PUser user2{p};
  check_count(p);
  process(p);
  check_count(p);
  std::cout << "Exiting" << std::endl;
  return 0;

}