#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>


using namespace std;
using namespace std::placeholders;


bool func(const string &s, string::size_type sz) {
    return (s.size() >= sz) ? true : false;
}


int main() {
    
    vector<string> vs{"abcde", "ac", "apple", "bear", "far", "disguise", "funeral"};
    auto iter = partition(vs.begin(), vs.end(), bind(func, _1, 5));
    auto b = vs.begin();
    while(b != iter) {
        cout << *b << " ";
        ++b;
    }
    cout << endl;
    return 0;
}
