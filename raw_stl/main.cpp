#include <vector>
#include <fstream>
#include <iostream>
#include <math.h>
#include <string>

/* static const uint32_t HEADER_SIZE = 4; */

/*   template <typename T, typename S> */
/*    std::array<std::array<T> > create_packets(T* data, S size, S packet_size) */
/*    { */
/*      S total_size = static_cast<S>(size + HEADER_SIZE); */
/*      S n_packets  = static_cast<S>(ceil( */
/*                       static_cast<double>(total_size) / static_cast<double>(packet_size))); */
/*      std::array<std::array<T>> buffer{}; */
/*      buffer.reserve(n_packets); */
/*      for (S i = 0; i < n_packets; i++) */
/*      { */
/*        buffer.emplace_back(std::array<S>{data, data + (i + packet_size)}); */
/*      } */
/*      return buffer; */
/*    } */


std::vector<uint8_t> readFileAsBytes(const std::string& file_path)
{
  std::ifstream        byte_stream(file_path, std::ios::binary);


  std::vector<uint8_t> file_bytes{std::istreambuf_iterator<char>(byte_stream), {}};


  byte_stream.close();

  return file_bytes;
}


int main(int argc, char**)
{
  std::vector<uint8_t> bytes = readFileAsBytes("data.txt");

  for (const auto& byte : bytes)
    std::cout << + byte;

  return 0;

}
