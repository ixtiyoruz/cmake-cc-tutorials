// you can name it as HELLO_HPP_INCLUDED or HELLO_HPP 
// please make sure that you ifndef is not a ifdef )))))

#ifndef HELLO_HPP
#define HELLO_HPP

class hello{
    public:
    static hello* getInstance();
    void say_hello();
    
    private:
    int raqam;
    static hello* instance;
};

#endif // HELLO_HPP_INCLUDED)
