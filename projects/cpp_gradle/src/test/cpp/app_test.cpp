#include "app.h"
#include <cassert>

int main() {
    building_cpp_applications::Greeter greeter;
    assert(greeter.greeting().compare("Hello, World!") == 0);
    return 0;
}