#include "Poco/Net/SocketAddress.h"
#include "Poco/Net/StreamSocket.h"
#include "Poco/Net/SocketStream.h"
#include "Poco/StreamCopier.h"
#include "Poco/ByteOrder.h"
#include <iostream>
using Poco::ByteOrder;
using Poco::UInt16;

int main(int argc, char** argv)
{
// Poco::Net::SocketAddress sa("www.saytlar.uz", 80);
// Poco::Net::StreamSocket socket(sa);
// Poco::Net::SocketStream str(socket);
// str << "GET / HTTP/1.1\r\n"
//  "Host: www.appinf.com\r\n"
//  "\r\n";
// str.flush();
// Poco::StreamCopier::copyStream(str, std::cout);

    #ifdef POCO_ARCH_LITTLE_ENDIAN
    std::cout << "little endian" << std::endl;
    #else
    std::cout << "big endian" << std::endl;
    #endif
    UInt16 port = 80;
    UInt16 networkPort = ByteOrder::toNetwork(port);
    return 0;
}