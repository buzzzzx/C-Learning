#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {

    string line;
    while(getline(cin, line)) {
        cout << line << endl;
        cout << toupper(line) << endl;
    }

    return 0;
}
