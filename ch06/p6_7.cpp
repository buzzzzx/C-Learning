#include <iostream>

using namespace std;

size_t count_calls() {
    static size_t i = 0;
    return i++;
}

int main() {

    for(int i = 0; i != 10; ++i) {
        cout << count_calls() << " ";
    }
    cout << endl;
    return 0;
}
