#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main() {

    vector<int> i_vec;
    int i;
    while(cin >> i) {
        i_vec.push_back(i);
    }
    int len = i_vec.size();
    for(int j = 0; j < len-1; j++) {
        cout << i_vec[j] + i_vec[j+1] << " ";
    }
    cout << endl;
    for(int j = 0; j < len/2; j++) {
        if(j == len-j) {
            cout << i_vec[j] << " ";
        }
        else {
            cout << i_vec[j] + i_vec[len-j] << " ";
        }
    }
    cout << endl;

    return 0;
}
