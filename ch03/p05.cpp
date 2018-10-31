#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {

    vector<int> ivec(10, -1);
    vector<vector<string>> file;
    vector<int> ivec1;
    vector<string> svec;
    for(int i = 0; i != 100; i++) {
        ivec.push_back(i);
    }
    string word;
    while(cin >> word) {
        svec.push_back(word);
    }
    return 0;
}
