#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {

    vector<int> iv;
    int i;
    int f = 2;
    while (cin >> i) {
        iv.push_back(i);
    }
    cout << count(iv.cbegin(), iv.cend(), f) << endl;

    return 0;
}
