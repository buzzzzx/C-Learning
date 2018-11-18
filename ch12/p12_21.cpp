#include <fstream>
#include "p12_2.h"

using namespace std;

int main() {
    
    ifstream in_file("file1.txt");
    string line;
    StrBlob sb;
    while (getline(in_file, line)) {
        sb.push_back(line);
    }
    StrBlobPtr be(sb.begin()), en(sb.end());
    for (; !equal(be, en); be.incr()) {
        cout << be.deref() << " ";
    }
    cout << endl;

    return 0;
}
