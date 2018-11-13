#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


void biggies(vector<string> &words, vector<string>::size_type sz) {
    sort(words.begin(), words.end());
    auto eu = unique(words.begin(), words.end());
    words.erase(eu, words.end());
    stable_sort(words.begin(), words.end(), 
            [] (const string &s1, const string &s2) { return s1.size() < s2.size(); });
    auto wc = stable_partition(words.begin(), words.end(), 
            [sz] (const string &s1) { return s1.size() >= sz; });
    auto count = wc - words.begin();
    cout << "cout: " << count << endl;
    
    for_each(words.begin(), wc, 
            [] (const string &s) { cout << s << " "; });
    cout << endl;
}

int main() {

    return 0;
}
