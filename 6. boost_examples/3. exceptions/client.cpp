#include <iostream>
#include <boost/asio.hpp>

using namespace boost::asio;
using ip::tcp;
using std::string;
using std::cout;
using std::endl;

int main() {
io_service service;
ip::tcp::endpoint ep( ip::address::from_string("127.0.0.1"), 1234);;
ip::tcp::socket sock(service);
// sock.connect(ep); // Line 1 this one throws an error 
boost::system::error_code err;

sock.connect(ep, err); // Line 2 this one returns error code
if ( err)
     cout << err << endl; // this is equal to try and catch
while(true){
     char data[512];
     boost::system::error_code error;
     size_t length = sock.read_some(buffer(data), error);
     if (error == error::eof){ // if you use error returns you can easly know when to exit, as the server stops it sends eof error code.s
          cout << error << endl;
          return 0; // Connection closed
          }
}
}