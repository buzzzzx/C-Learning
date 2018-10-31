#include <iostream>

int a = 42;

int main() {

    int b = 0;
    std::cout << a << b << std::endl;
    int a = 0;
    std::cout << a << b << std::endl;

    std::cout << ::a << b << std::endl;

    return 0;
}
