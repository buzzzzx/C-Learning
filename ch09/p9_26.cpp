#include <iostream>
#include <list>
#include <vector>


using namespace std;


int main() {

    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> iv(ia, end(ia));
    list<int> il(ia, end(ia));

    for(auto i = il.begin(); i != il.end(); ) {
        if(*i % 2 != 0) {
            i = il.erase(i);
        }
        else {
            ++i;
        }
    }

    for(auto i = iv.begin(); i != iv.end(); ) {
        if(*i % 2 == 0) {
            i = iv.erase(i);
        }
        else {
            ++i;
        }
    }

    for(const auto &i: il) {
        cout << i << " ";
    }
    cout << endl;
    for(const auto &i: iv) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
