#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <fstream>


using namespace std;


int main() {

    string filePath = "file1.txt";
    ifstream in_file(filePath);
    istream_iterator<string> in_iter(in_file);
    istream_iterator<string> eof;
    vector<string> vs;
    while (in_iter != eof) {
        vs.push_back(*in_iter++);
    }

    for(const auto &i : vs) {
        cout << i << " ";
    }
    cout << endl;
    

    return 0;
}
