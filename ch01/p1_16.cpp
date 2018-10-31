#include <iostream>

int main() {
    
    int sum = 0, v1 = 0;

    while(std::cin >> v1) {
        sum += v1;
    }

    std::cout << sum << std::endl;

    return 0;
}
