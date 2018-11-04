#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {

    int a = 2, b = 5;
    cout << "origin is " << a << " " << b << endl;

    swap(a, b);

    cout << "new is " << a << " " << b << endl;

    return 0;
}
