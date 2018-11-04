#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {

    int a = 4, b = 2;
    int (*p1)(int, int) = add;
    int (*p2)(int, int) = substract;
    int (*p3)(int, int) = multiply;
    int (*p4)(int, int) = divide;
    vector<decltype(p1)> f_vec = {p1, p2, p3, p4};

    for(auto i: f_vec) {
        cout << i(a, b) << endl;
    }

    return 0;
}

int add(int a, int b) {
    return a+b;
}

int substract(int a, int b) {
    return a-b;
}

int multiply(int a, int b) {
    return a*b;
}

int divide(int a, int b) {
    return a/b;
}

