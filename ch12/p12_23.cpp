#include <iostream>
#include <string>
#include <cstring>
#include <memory>

using namespace std;

int main() {
    const char *c1 = "hello ";
    const char *c2 = "world";
    unsigned len = strlen(c1) + strlen(c2);
    char *p = new char[len]();
    strcat_s(p, len, c1);
    strcat_s(p, len, c2);
    cout << p << endl;
    
    string s1 = "hello ";
    string s2 = "world";
    strcpy_s(p, len, (s1 + s2).c_str());
    cout << p << endl;
    delete [] p;
    return 0;
}
