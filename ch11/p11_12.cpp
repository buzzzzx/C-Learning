#include <iostream>
#include <string>
#include <vector>
#include <utility>


using namespace std;


int main() {
    
    string word;
    int i;
    vector<pair<string, int>> vp;
    while (cin >> word >> i) {
        vp.push_back(make_pair(word, i));
    }
     
    return 0;
}
