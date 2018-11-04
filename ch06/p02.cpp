#include <iostream>

using namespace std;

int main() {

    const int a = 5;
    auto &b = a;

    cout << b << endl;
    return 0;
}
