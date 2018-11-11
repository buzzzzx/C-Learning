#include <iostream>
#include <string>


using namespace std;


int main() {
    
    string s1("ab2c3d7R4E6");
    string numbers("0123456789");
    string::size_type pos = 0;
    cout << "numerical characters: ";
    while((pos = s1.find_first_not_of(numbers, pos)) != string::npos) {
        cout << s1[pos] << " ";
        ++pos;
    }
    pos = 0;
    cout << "\nalphabetic characters: ";
    while((pos = s1.find_first_of(numbers, pos)) != string::npos) {
        cout << s1[pos] << " ";
        ++pos;
    }
    cout << endl;

    return 0;
}
