#include <iostream>
#include <stdlib.h>
#include "app.h"

std::string building_cpp_applications::Greeter::greeting() {
    return std::string("Hello, World!");
}

int main () {
    building_cpp_applications::Greeter greeter;
    std::cout << greeter.greeting() << std::endl;
    return 0;
}