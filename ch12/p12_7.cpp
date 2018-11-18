#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> func1() {
    return make_shared<vector<int>>();
}

shared_ptr<vector<int>> func2(shared_ptr<vector<int>> vi) {
    int i;
    while (cin >> i) {
        vi->push_back(i);
    } 
    return vi;
}

void func3(shared_ptr<vector<int>> vi) {
    for (const auto &i : *vi) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    auto vi = func1();
    vi = func2(vi);
    func3(vi);

    return 0;
}
