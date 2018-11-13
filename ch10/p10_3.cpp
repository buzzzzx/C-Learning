#include <numeric>
#include <iostream>
#include <vector>


using namespace std;


int main() {

    vector<int> vi = {1, 2, 3, 4, 5};
    int sum = accumulate(vi.cbegin(), vi.cend(), 0);
    cout << sum << endl;
    return 0;
}
