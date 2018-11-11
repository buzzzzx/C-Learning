#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1 = "some string", s2 = "some other string";
    s1.insert(0, s2);
    cout << s1 << endl;

    return 0;
}
