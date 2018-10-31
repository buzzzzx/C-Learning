#include <iostream>

int main() {

    int val = 1024;
    int &refVal = val;
    int b = 1;
    refVal = b;
    std::cout << val << std::endl;

    int *p = nullptr;
    int i = 42;
    int *p;
    int *&r = p;
    r = &i;
    *r = 0;

    return 0;
}
