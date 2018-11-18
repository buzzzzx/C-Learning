#include <iostream>
#include <string>

using namespace std;

int main() {
    string::size_type array_len = 12;
    string *p = new string[array_len];
    string input;
    cin >> input;
    string::size_type len_input = input.size();
    if (len_input <= array_len) {
        for (string::size_type i = 0; i != len_input; ++i) {
            *(p + i) = input[i];
        } 
        for (string::size_type i = 0; i != len_input; ++i) {
            cout << *(p + i);
        }
        cout << endl;
    } else {
        cout << "too long." << endl;
    }

    delete [] p;

    return 0;
}
