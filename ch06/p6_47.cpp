#include <iostream>
#include <vector>

#define NDEBUG

using namespace std;
using iter = vector<int>::const_iterator;

void print(iter b, iter e) {
#ifndef NDEBUG
    cout << e - b << endl;
#endif
    if(b == e) {
        cout << endl;
        return;
    }
    cout << *b << " ";
    print(++b, e);
}

int main() {
    
    vector<int> i_vec = {0, 1, 2, 3, 4, 5, 6, 7};
    print(i_vec.cbegin(), i_vec.cend());

    return 0;
}
