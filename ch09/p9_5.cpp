#include <iostream>
#include <vector>

using namespace std;
using item = vector<int>::const_iterator;

int func(item b, item c, int i) {
    while(b != c) {
        if(*b == i) {
            return i;
        }
        ++b;
    }
    return 0;
}

int main() {
    
    vector<int> i_v = {1, 3, 5, 7, 9, 8, 4, 2};
    int i;
    cin >> i;
    const auto b = i_v.cbegin();
    const auto e = i_v.cend();
    if(func(b, e, i)) {
        cout << "YES." << endl;
    }
    else {
        cout << "NO." << endl;
    }
    

    return 0;
}
