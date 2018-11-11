#include <iostream>
#include <string>


using namespace std;


void func(string &s, const string &oldVal, const string &newVal) {
    auto curr = s.begin();
    auto len_oldVal = oldVal.size();
    while(curr <= s.end() - len_oldVal) {
        if(oldVal == string(curr, curr+len_oldVal)) {
            curr = s.erase(curr, curr+len_oldVal);
            curr = s.insert(curr, newVal.begin(), newVal.end());
            curr += newVal.size();
        }
        else {
            ++curr;
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
