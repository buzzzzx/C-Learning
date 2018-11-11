#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vi = {1, 2, 3, 4, 5, 6};
    auto iter = vi.begin();
    iter = vi.insert(iter, *iter++);
    for(auto i: vi) {
        cout << i << " ";
    } 
    cout << endl;
    iter++;
    cout << *(iter) << endl;
    iter++;
    cout << *(iter) << endl;

    return 0;
}
