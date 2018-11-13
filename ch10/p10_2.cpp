#include <algorithm>
#include <iostream>
#include <list>


using namespace std;


int main() {

    list<string> ls;
    string s;
    string fd = "zhuxin";
    while (cin >> s) {
        ls.push_back(s);
    }
    cout << count(ls.cbegin(), ls.cend(), fd) << endl;

    return 0;
}
