#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int arr[10];
    int *parr[10];
    int (*Parray)[10] = &arr;
    int (&Rarray)[10] = arr;
    int *(&arry)[10] = parr;

    string nums[] = {"one", "two", "three"};
    string *p2 = nums;
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *beg = begin(a);
    int *last = end(a);

    int b[3][4];
    
    int cnt = 0;

    for(auto &row: b) {
        for(auto &col: row) {
            col = cnt;
            cnt++;
        }
    }

    for(auto p = b; p != b + 3; p++) {
        for(auto q = *p; q != *p + 4; q++) {
            cout << q << " ";
        }
        cout << endl;
    }
    
    vector<int> ivec(begin(a), end(a));

    return 0;
}
