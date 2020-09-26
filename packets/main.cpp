#include <iostream>

void bitmask_test()
{
  unsigned int total_size = 260;

  uint8_t packet[4];

  /* packet[0] = (total_size & 0xFF) >> 24; */
  /* packet[1] = (total_size & 0xFF) >> 16; */
  /* packet[2] = (total_size & 0xFF) >> 8; */
  /* packet[3] = (total_size & 0xFF); */

  packet[0] = (total_size >> 24) & 0xFF;
  packet[1] = (total_size >> 16) & 0xFF;
  packet[2] = (total_size >> 8) & 0xFF;
  packet[3] = (total_size)&0xFF;

  std::cout << packet[0] << std::endl;
  std::cout << packet[1] << std::endl;
  std::cout << packet[2] << std::endl;
  std::cout << packet[3] << std::endl;

  int computed_size =
      int(packet[0] << 24 | packet[1] << 16 | packet[2] << 8 | packet[3]);

  std::cout << "Computed: " << computed_size << std::endl;
}

int main(int argc, char **argv)
{
  /* int n = 2534234; */

  /* uint8_t header[4]; */

  /* header[0] = (n & 0xFF) >> 24; */
  /* header[1] = (n & 0xFF) >> 16; */
  /* header[2] = (n & 0xFF) >> 8; */
  /* header[3] = (n & 0xFF); */

  /* unsigned int d_n = */
  /*     int(header[0] << 24 | header[1] << 16 | header[2] << 8 | header[3]); */

  /* /1* std::cout << header[0] << std::endl; *1/ */
  /* /1* std::cout << header[1] << std::endl; *1/ */
  /* /1* std::cout << header[2] << std::endl; *1/ */
  /* std::cout << d_n << std::endl; */

  bitmask_test();
  return 0;
}
