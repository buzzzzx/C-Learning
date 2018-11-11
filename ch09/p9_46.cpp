#include <iostream>
#include <string>


using namespace std;


string &func(string &name, const string &fname, const string &bname) {
    name.insert(0, fname);
    name.insert(name.size(), bname);

    return name;
}


int main() {

    string s = "Jack", fname = "Mr.", bname = "III"; 
    auto name = func(s, fname, bname);
    cout << name << endl;

    return 0;
}
