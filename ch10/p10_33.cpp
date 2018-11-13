#include <iostream>
#include <fstream>
#include <iterator>


using namespace std;


void func(const string &file_in, const string &file_out1, const string &file_out2) {
    ifstream in_file(file_in);
    ofstream out_file1(file_out1), out_file2(file_out2);
    istream_iterator<int> in_iter(in_file), eof;
    ostream_iterator<int> out_iter1(out_file1, " "), out_iter2(out_file2, "\n");
    while (in_iter != eof) {
        (*in_iter % 2 == 0) ? out_iter2 = *in_iter : out_iter1 = *in_iter;
        ++in_iter;
    }
    
}


int main() {
    
    string file_in("file2.txt"), file_out1("file_out1.txt"), file_out2("file_out2.txt");
    func(file_in, file_out1, file_out2);

    return 0;
}
