#include <string>
#include <iostream>
#include <zmq.hpp>
#include <thread>
#include <chrono>
#include "../zhelpers.hpp"

int main(int argc, char** argv) {
  zmq::context_t context(1);
  zmq::socket_t publisher(context, ZMQ_PUB);

  srandom((unsigned) time(NULL));

  if (argc == 2) {
    publisher.bind(argv[1]);
  } else {
    publisher.bind("tcp://*:5556");
  }

  std::this_thread::sleep_for(std::chrono::seconds(1));

  for (int i = 0; i < 1000; i++) {
    std::stringstream ss;
    ss << std::dec << std::setw(3) << std::setfill('0') << i;

    s_sendmore(publisher, ss.str());
    int result = s_send(publisher, std::string{"Save yo mamma"}, 0);
  }

  for (;;) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::stringstream ss;
    ss << std::dec << std::setw(3) << std::setfill('0') << within(1000);

    s_sendmore(publisher, ss.str());
    s_send(publisher, std::string{"Off with that bitch"});
  }

  return 0;
}
