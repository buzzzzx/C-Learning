#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>


using namespace std;
using namespace std::placeholders;


bool check_size(const int &i, const string &s) {
    return i > s.size();
}


int main() {
    
    vector<int> iv{1, 2, 3, 4, 5, 6};
    string s("abc");
    auto p = find_if(iv.cbegin(), iv.cend(), bind(check_size, _1, s));
    if (p != iv.end()) {
        cout << *p << endl;
    }

    return 0;
}
