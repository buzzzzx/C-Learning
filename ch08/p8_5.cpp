#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readFile(const string &fileName, vector<string> &vec) {
    ifstream in(fileName);
    string data;
    while(in >> data) {
        vec.push_back(data);
    }
    for(auto v: vec) {
        cout << v << "\n";
    }
    cout << endl;
}

int main() {
    vector<string> vec;
    string fileName = "test1.txt";
    readFile(fileName, vec);

    return 0;
}
