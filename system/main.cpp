#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string command{
      "ffmpeg -ss 0 -i /data/www/kiggle/streaming/movie.mp4 -vf "
      "select=\"eq(pict_type\\,I)\" -vframes 1 preview.jpg"};

  std::system(command.c_str());

  std::cout << std::ifstream("preview.jpg").rdbuf();

  return 0;
}
