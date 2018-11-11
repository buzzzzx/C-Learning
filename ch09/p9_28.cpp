#include <iostream>
#include <forward_list>

using namespace std;
using item = forward_list<string>;

void func(item &flst, const string &s1, const string &s2) {
    auto b = flst.begin();
    auto prev = flst.before_begin();
    while(b != flst.end()) {
        if(*b == s1) {
            flst.insert_after(b, s2);
            return;
        }
        prev = b;
        ++b;
    }
    flst.insert_after(prev, s2);
}

int main() {
    
    forward_list<string> flst = {"haha", "xixi", "hehe", "zx", "biubiu"};
    string s1 = "sx";
    string s2 = "best";
    func(flst, s1, s2);
    for(const auto &f: flst) {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}
