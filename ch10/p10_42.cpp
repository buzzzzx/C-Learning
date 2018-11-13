#include <iostream>
#include <list>
#include <iterator>

using namespace std;


void elimDups(list<string> &lst) {
    
    lst.sort();
    lst.unique();
}


int main() {

    list<string> lst{"abc", "ab", "zx", "zhuxin", "zx", "hha", "haha", "hha", "xixi"};
    elimDups(lst);
    ostream_iterator<string> out_iter(cout, " ");

    copy(lst.cbegin(), lst.cend(), out_iter);
    cout << endl;

    return 0;
}
