#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    
    list<char *> c = {"a", "hello", "haha"};
    vector<string> s(c.cbegin(), c.cend());

    return 0;
}
