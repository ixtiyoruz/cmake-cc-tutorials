#include "hello.hpp"
#include <iostream>
hello *hello::instance = NULL;

hello *hello::getInstance(){
    if(instance == NULL){
        instance = new hello();
        instance->raqam = 100;
    }
    return instance;
}

void hello::say_hello(){      
    // say hello
    std::cout <<"hello world"  << getInstance()->raqam<< std::endl;
     getInstance()->raqam = getInstance()->raqam + 1;
}