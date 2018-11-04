#include <iostream>
#include <vector>

using namespace std;
using iter = vector<int>::const_iterator;

void print(iter f, iter l) {
    if(f == l) {
        cout << "over!" << endl;
        return;
    }
    cout << *f << " ";
    print(++f, l);
}

int main() {

    vector<int> i_vec = {0, 1, 2, 3, 4, 5, 6, 7};
    
    print(i_vec.cbegin(), i_vec.cend());

    return 0;
}
