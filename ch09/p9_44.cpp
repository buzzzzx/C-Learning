#include <iostream>
#include <string>


using namespace std;


void func(string &s, const string &oldVal, const string &newVal) {
    auto len_oldVal = oldVal.size();
    for (auto pos = 1; pos <= s.size() - len_oldVal; ) {
        if ((s[pos] == oldVal[0]) && (s.substr(pos, len_oldVal) == oldVal)) {
            s.replace(pos, len_oldVal, newVal);
            pos += newVal.size();
        }
        else {
            ++pos;
        }
    }

}


int main() {

    string s = "I thought haha th through biu thoug thought";
    string oldVal = "thought";
    string newVal = "thou";
    func(s, oldVal, newVal);
    cout << s << endl;

    return 0;
}
