#include <iostream>

using namespace std;

int main() {

    int i = 10;
    const int &r = i;
    cout << r << endl;
    i = 20;
    cout << r << endl;

    return 0;
}
