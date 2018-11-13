#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
#include <iterator>


using namespace std;


int main() {

    vector<int> vi{1, 2, 3, 4, 5, 6, 1, 2, 4, 6, 7};
    list<int> li;
    sort(vi.begin(), vi.end());
    unique_copy(vi.begin(), vi.end(), inserter(li, li.begin()));
    for (const auto &i : li) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
