#include <iostream>
#include <deque>


using namespace std;


int main() {

    string s;
    deque<string> ds;
    while(cin >> s) {
        ds.push_back(s);
    }
    for(auto i: ds) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
