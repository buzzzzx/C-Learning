#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {

    vector<string> vs = {"abc", "zx", "bcd", "bc", "qq", "haha", "bcd", "qq", "yes"};
    sort(vs.begin(), vs.end());
    auto end_unique = unique(vs.begin(), vs.end());
    vs.erase(end_unique, vs.end());
    stable_sort(vs.begin(), vs.end(), isShorter);

    for(const auto &s: vs) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
