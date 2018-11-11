#include <iostream>
#include <string>
#include <vector>


using namespace std;


int sum_of_int(const vector<string> &vs) {
    int sum = 0;
    for(const auto &i: vs) {
        sum += stoi(i);
    }
    return sum;
}


double sum_of_double(const vector<string> &vs) {
    double sum = 0.0;
    for(const auto &i: vs) {
        sum += stod(i);
    }
    return sum;
}


int main() {

    vector<string> vs = {"1", "2", "3", "4"};
    cout << sum_of_int(vs) << endl;
    cout << sum_of_double(vs) << endl;

    return 0;
}
