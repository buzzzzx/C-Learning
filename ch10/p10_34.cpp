#include <iostream>
#include <iterator>
#include <vector>


using namespace std;


int main() {
    
    vector<int> iv{1, 2, 3, 4, 5, 6, 7, 8, 9};
    ostream_iterator<int> out_iter(cout, " ");
    copy(iv.crbegin(), iv.crend(), out_iter);
    cout << endl;

    return 0;
}
