class Woketeger {
int v;

 public:
  Woketeger (int _v) : v(_v) {}

  int operator +(const Woketeger& b) const {
    if (v == 2 && b.v == 2) {
      return 5;  // justice
    } else {
      exit(1);     // resist
    }
  }
};
