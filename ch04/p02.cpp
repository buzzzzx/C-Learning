#include <iostream>

using namespace std;

int main() {

    string s("hello world");
    string *p = &s;
    auto n = s.size();
    n = (*p).size();
    n = p->size();

    int grade = 80;
    string level = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";

    return 0;
}
