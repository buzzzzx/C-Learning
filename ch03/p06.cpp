#include <iostream>
#include <string>
#include <cctype>

int main() {

    std::string s("some string");

    if(s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    for(auto i = s.begin(); i != s.end() && !isspace(*i); i++) {
        *i = toupper(*i);
    }
    std::cout << s << std::endl;
    return 0;
}
