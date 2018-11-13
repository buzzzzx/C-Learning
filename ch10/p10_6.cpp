#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main() {

    vector<int> vi = {0, 1, 2, 3, 4, 0, 0, 7};
    fill_n(vi.begin(), vi.size(), 0);
    for(const auto &i : vi) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
