#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main() {

    string word;
    vector<string> words;
    while (cin >> word) {
        if((find(words.cbegin(), words.cend(), word) == words.cend())) {
            words.push_back(word);
        } 
    }
    cout << endl;
    for (const auto &w : words) {
        cout << w << " ";
    }
    cout << endl;

    return 0;
}
