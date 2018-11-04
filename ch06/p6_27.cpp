#include <iostream>
#include <initializer_list>

using namespace std;

void calculate_value(initializer_list<int> li) {
    int sum = 0;
    for(const auto &i: li) {
        sum += i;
    }
    cout << sum << endl;
}

int main() {

    calculate_value({1, 2, 3, 4});
    calculate_value({1, 2, 3, 4, 5});

    return 0;
}
