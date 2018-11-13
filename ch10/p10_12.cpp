#include <iostream>
#include <vector>
#include "../ch07/p7_12.h"


using namespace std;


bool compareIsbn(const Sales_data &s1, const Sales_data &s2) {
    return s1.isbn() < s2.isbn();
}


int main() {
    
    Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
	vector<Sales_data> v{ d1, d2, d3, d4, d5 };
    sort(v.begin(), v.end(), compareIsbn);
    for (const auto &element : v) {
	    cout << element.isbn() << " ";
    }
	cout << endl;

    return 0;
}
