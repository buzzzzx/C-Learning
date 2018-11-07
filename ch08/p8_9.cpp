#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    ifstream inFile("test2.txt");
    string buff;
    vector<string> vec;
    while(getline(inFile, buff)) {
        vec.push_back(buff);
    }

    for(auto line: vec) {
        istringstream in(line);
        cout << in.str() << endl;
        string word;
        while(in >> word) {
            cout << word << "   ";
        }
    }
    cout << endl;

    return 0;
}
