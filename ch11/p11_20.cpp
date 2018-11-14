#include <iostream>
#include <string>
#include <map>


using namespace std;


int main() {
    
    map<string, size_t> word_counts;
    string word;
    while (cin >> word) {
        auto p = word_counts.insert({word, 1});
        if (!p.second) {
            ++p.first->second;
        }
    }

    for (const auto r : word_counts) {
        cout << r.first << " " << r.second << "\n";
    }
    cout << endl;

    return 0;
}
