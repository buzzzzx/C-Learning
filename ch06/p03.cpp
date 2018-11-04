#include <iostream>

using namespace std;

int test() {
    int x = 5;
    return x;
}

string &testString() {
    string ret;
    return ret; // 编译器会警告，这是一个局部变量引用
}
int main() {

    int a = test();
    cout << a << endl;
    return 0;
}
