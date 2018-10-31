#include <iostream>

using namespace std;

int main() {

    int i = 5, j = 2;

    double slope = static_cast<double>(i) / j;

    cout << slope << endl;

    void *p = &i;
    int *pi = static_cast<int *>(p);

    const int *pc;
    int *pp = const_cast<int *>(pc);

    return 0;
}
