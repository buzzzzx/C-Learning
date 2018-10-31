#include <iostream> 
#include <vector>

using namespace std;

int main() {

    vector<int> i_vec = {0, 1, 2, 3, 4, 5, 6};

    auto p = i_vec.begin();
    while(p != i_vec.end() && *p >= 0) {
        cout << *p++ << " ";
    }
    cout << endl;
    return 0;
}
