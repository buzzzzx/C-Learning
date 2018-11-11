#include <iostream>
#include <list>
#include <deque>


using namespace std;


int main() {

    list<int> l = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> odd;
    deque<int> even;
    for(const auto &i : l) {
        (i % 2 == 0) ? even.push_back(i) : odd.push_back(i);
    }
    cout << "odd: ";
    for(const auto &i: odd) {
        cout << i << " ";
    }
    cout << endl;
    cout << "even: ";
    for(const auto &i: even) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
