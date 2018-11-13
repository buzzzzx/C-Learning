#include <iostream>
#include <algorithm>
#include <list>


using namespace std;


int main() {

    list<int> lst{1, 0, 2, 3, 4, 0, 5, 6, 7, 0, 8, 9};
    auto f = find(lst.crbegin(), lst.crend(), 0);
    cout << *(--f) << endl;

    return 0;
}
