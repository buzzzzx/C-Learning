#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {

    vector<string> s_vec;
    string word;
    while(cin >> word) {
        s_vec.push_back(word);
    }
    for(auto &w: s_vec) {
        for(auto &c: w) {
            c = toupper(c);
        }
    }
    for(auto i: s_vec) {
        cout << i << endl;
    }

    return 0;
}
