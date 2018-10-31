#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> i_vect = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11};

    for(auto b = i_vect.begin(); b != i_vect.end(); b++) {
        *b = (*b % 2 != 0) ? *b * 2 : *b;
    }

    for(auto &b: i_vect) {
        cout << b << " ";
    }
    cout << endl;

    return 0;
}
