#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main() {

    vector<string> vs = {"abc", "zx", "bcd", "bc", "qq", "haha", "bcd", "qq", "yes"};
    sort(vs.begin(), vs.end());
    auto end_unique = unique(vs.begin(), vs.end());
    vs.erase(end_unique, vs.end());
    for(const auto &s: vs) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
