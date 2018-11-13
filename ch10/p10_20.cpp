#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int main() {

    vector<string> vs = {"abcdef", "aa", "zhuxinhh", "yes", "hhhhhhhh", "kaks"};
    int sz = 6;
    auto cnt = count_if(vs.begin(), vs.end(), 
            [=] (const string &s) { return s.size() > sz; });
    
    cout << cnt << endl;
    cout << !sz << endl;
    return 0;
}
