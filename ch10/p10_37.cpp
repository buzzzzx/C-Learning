#include <iostream>
#include <vector>
#include <algorithm>
#include <list>


using namespace std;


int main() {

    vector<int> iv{1, 4, 10, 2, 5, 3, 9, 8, 6, 7};
    list<int> lst;
    copy(iv.crbegin()+3, iv.crend()-2, back_inserter(lst));
    ostream_iterator<int> out_iterator(cout, " ");
    copy(lst.cbegin(), lst.cend(), out_iterator);
    cout << endl;
    return 0;
}
