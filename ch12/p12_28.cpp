#include "p12_27.h"
#include <iostream>
#include <fstream>

using namespace std;

void runQueries(ifstream &in_file) {
    TextQuery tq(in_file);
    while (true) {
        cout << "enter word to look for, or q to quit it: ";
        string s;
        if (!(cin >> s) && s =="q") break;
        print(cout, tq.query(s)) << endl;
    }
}

int main() {
    ifstream in_file("file2.txt");
    runQueries(in_file);
    return 0;
}
