#include <iostream>
#include <sstream>

using namespace std;

istream& func(istream &is)
{
	string buf;
    while (is >> buf) {
        cout << buf << endl;
    }
	is.clear();
	return is;
}


int main() {

    istringstream in("hello world");   
    func(in);

    return 0;
}
