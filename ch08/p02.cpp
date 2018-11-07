#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream in("test1.txt");
    string s1, s2, s3;
    in >> s1 >> s2 >> s3;
    cout << s1 << " "
        << s2 << " "
        << s3 << " " << endl;

    return 0;
}
