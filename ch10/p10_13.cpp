#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;


bool func(const string &s) {
    return (s.size() >= 5) ? true : false;
}


int main() {
    
    vector<string> vs{"abcde", "ac", "apple", "bear", "far", "disguise", "funeral"};
    auto iter = partition(vs.begin(), vs.end(), func);
    auto b = vs.begin();
    while(b != iter) {
        cout << *b << " ";
        ++b;
    }
    cout << endl;
    return 0;
}
