#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of number between 0 and 15" << endl;
    
    string result;
    string::size_type n;
    while(cin >> n) {
        if(n < hexdigits.size()) {
            result += hexdigits[n];
        }
    }
    cout << result << endl;

    return 0;
}
