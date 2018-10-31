#include <iostream>

using namespace std;

int main() {

    int ia[3][4];
    int cnt = 0;
    for(auto &p: ia) {
        for(auto &q: p) {
            q = cnt;
            cnt++;
        }
    }

    for(auto p = begin(ia); p != end(ia); p++) {
        for(auto q = begin(*p); q != end(*p); q++) {
            cout << *q << " ";
        }
        cout << endl;
    }

    return 0;
}
