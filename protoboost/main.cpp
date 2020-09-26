#include <boost/asio.hpp>
#include "ProtobufHelpers.h"
#include "AsioAdapting.h"
#include "include/TrxMessage.pb.h"
#include <iostream>
#include <fstream>

using boost::asio::ip::tcp;
int main(int argc, char* argv[]) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    if (argc != 2) {
        std::cerr << "Usage:  " << argv[0] << " TrxMessage File" << std::endl;
        return -1;
    }
    boost::asio::io_service io_service;
    tcp::acceptor acceptor(io_service, tcp::endpoint(tcp::v4(), 27015));
    for (;;)
    {
        tcp::socket socket(io_service);
        acceptor.accept(socket);
        AsioOutputStream<boost::asio::ip::tcp::socket> aos(socket); // Where m_Socket is a instance of boost::asio::ip::tcp::socket
        CopyingOutputStreamAdaptor cos_adp(&aos);
        int i = 0;
        do {
            ++i;
            Trx::Message message;
            message.set_type(12);
            message.set_body("this:is:an:instruction");
            std::fstream output(argv[1], std::ios::out | std::ios::trunc | std::ios::binary);
            if (!message.SerializeToOstream(&output)) {
                 std::cerr << "Failed to write TrxMessage." << std::endl;
                 return -1;
             }
            cos_adp.Flush();
            if (i > 10) {
                return 1;
            }
        } while (true);
    }
}
