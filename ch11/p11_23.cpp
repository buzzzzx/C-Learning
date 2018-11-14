#include <iostream>
#include <map>
#include <vector>


using namespace std;


int main() {

    multimap<string, vector<string>> names;
    string f, s;
    vector<string> kid;
    while (cin >> f >> s) {
        kid.push_back(s);
        names.insert({f, kid});
    }
    for (const auto &c : names) {
        cout << "family name: " << c.first << " "
             << "kids names: ";
        for (const auto &i : c.second) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
