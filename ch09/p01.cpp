#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5};
    
    v.erase(v.begin()+1, v.begin()+2);

    for(const auto &i: v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
