this is a simple server client program using sockets 

used library: boost.asio

server reads a request and writes a response as much as possible even two requests comes at the same time like:
frist client requests server to read and at the ssame  time  second client requests write,  this asynchronous 
server handles this kind of situation.  
