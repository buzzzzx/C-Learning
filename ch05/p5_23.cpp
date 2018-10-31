#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;

    try {
        if(b == 0) {
            throw runtime_error("b is 0");
        }
        cout << a/b << endl;
    }
    catch(runtime_error err) {
        cout << err.what() << endl;
    }

    return 0;
}
