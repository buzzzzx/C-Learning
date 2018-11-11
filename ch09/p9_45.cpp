#include <iostream>
#include <string>


using namespace std;


string &func(string &name, const string &fname, const string &bname) {
    auto f = name.begin();
    name.insert(f, fname.begin(), fname.end());
    name.append(bname);
    return name;
}


int main() {

    string s = "Jack", fname = "Mr.", bname = "III"; 
    auto name = func(s, fname, bname);
    cout << name << endl;

    return 0;
}
