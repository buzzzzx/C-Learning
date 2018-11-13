#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
#include <iterator>


using namespace std;


int main() {
    vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> l1, l2, l3;
    copy(vi.cbegin(), vi.cend(), back_inserter(l1));
    copy(vi.cbegin(), vi.cend(), front_inserter(l2));
    copy(vi.cbegin(), vi.cend(), inserter(l3, l3.begin()));
    
    for (const auto &i : l1) {
        cout << i << " ";
    }
    cout << endl;
    for (const auto &i : l2) {
        cout << i << " ";
    }
    cout << endl;
    for (const auto &i : l3) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
