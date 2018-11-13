#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>


using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz) {
    return s.size() <= 6;
}


int main() {

    vector<string> words{"aa", "aaaaaa", "abcddddd", "zhuxin", "sadaaaaa"};
    
    auto f = count_if(words.begin(), words.end(), bind(check_size, _1, 6));

    cout << f << endl;

    return 0;
}
