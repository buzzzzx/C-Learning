#include <iostream>
#include "Chapter6.h"

using namespace std;

int main() {
    
    int i;
    cin >> i;

    int r = fact(i);
    cout << r << endl;

    return 0;
}

int fact(int i) {
    int r = 1;
    while(i > 1) {
        r = r * (i--);
    }
    return r;
}
