#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {

    list<int> l = {1, 2, 3, 4, 5, 6};
    vector<double> v(l.cbegin(), l.cend());
    for(const auto &i: v ) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
