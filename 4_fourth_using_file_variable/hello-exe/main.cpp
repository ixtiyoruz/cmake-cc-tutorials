#include <iostream>
#include "say-hello/hello.hpp"
int main(){
    for(int i = 0; i<100;i++){
        hello::getInstance()->say_hello();
    }
}