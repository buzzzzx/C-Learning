#include <iostream>
#include <vector>

using namespace std;

vector<int> *func1() {
    vector<int> *vi = new vector<int>;
    return vi;
}

vector<int> *func2(vector<int> *vi) {
    int i;
    while (cin >> i) {
        vi->push_back(i);
    } 
    return vi;
}

void func3(vector<int> *vi) {
    for (const auto &i : *vi) {
        cout << i << " ";
    }
    cout << endl;
    delete vi;
}

int main() {

    auto vi = func1();
    vi = func2(vi);
    func3(vi);

    return 0;
}
