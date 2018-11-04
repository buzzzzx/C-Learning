#include <iostream>

using namespace std;

bool has_upper_letter(const string &s) {
    bool flag = false;
    auto len = s.size();
    for(decltype(len) i = 0; i != len; i++) {
        if(isupper(s[i])) {
            flag = true;
        }
    }
    return flag;
} 

void to_lower(string &s) {
    auto len = s.size();

    for(decltype(len) i = 0; i != len; i++) {
        if(isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
}

int main() {

    string s = "hello WoRlD.";
    if(has_upper_letter(s)) {
        cout << "Have upper letter." << endl;
    }
    to_lower(s);
    cout << s << endl;

    return 0;
}
