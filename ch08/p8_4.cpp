#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readFile(const string &name, vector<string> &vec) {
    ifstream in(name);
    string buf;
    if(in) {
        while(getline(in, buf)) {
            vec.push_back(buf);
        }
    }
}

int main() {
    

    return 0;
}
