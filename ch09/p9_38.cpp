#include <iostream>
#include <vector>


using namespace std;


int main() {

    vector<int> iv;
    cout << iv.size() << " "
         << iv.capacity() << endl;

    for(int i = 0; i < 24; i++) {
        iv.push_back(i);
    }
    cout << iv.size() << " "
         << iv.capacity() << endl;
    for(int i = 0; i < 8; i++) {
        iv.push_back(i);
    }
    cout << iv.size() << " "
         << iv.capacity() << endl;

    iv.push_back(22);
    cout << iv.size() << " "
         << iv.capacity() << endl;

    return 0;
}
