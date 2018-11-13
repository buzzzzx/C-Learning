#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>


using namespace std;


int main() {

    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> vs;
    copy(in_iter, eof, back_inserter(vs));
    sort(vs.begin(), vs.end());
    copy(vs.cbegin(), vs.cend(), out_iter);
    

    return 0;
}
