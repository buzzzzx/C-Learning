#include <iostream>
#include <stack>


using namespace std;


int main() {

    string formula = "(4*5)+(((1+2)*2)";
    stack<char> st;
    auto b = formula.cbegin();
    auto e = formula.cend();
    while (b != e) {
        if (*b == '(') {
            st.push(*b);
        }
        else if (*b == ')') {
            if(st.empty()) {
                cout << "not matched!" << endl;
                return -1;
            }
            st.pop();
        }
        ++b;
    }
    if (st.empty()) {
        cout << "matched!" << endl;
    }
    else {
        cout << "not matched!" << endl;
    }

    return 0;
}
