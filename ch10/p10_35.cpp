#include <iostream>
#include <iterator>
#include <vector>


using namespace std;


int main() {

    vector<int> iv{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto end = iv.cend() - 1; end >= iv.cbegin(); --end) {
        cout << *end << " ";
    }
    cout << endl;

    return 0;
}
