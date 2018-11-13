#include "../ch07/p7_12.h"
#include <vector> 

using namespace std;


int main() {
    Sales_data v1("aa"), v2("aaa"), v3("abc"), v4("zxx");
    vector<Sales_data> v{v1, v2, v3, v4};
    sort(v.begin(), v.end(), 
            [] (const Sales_data &s1, const Sales_data &s2) { return s1.isbn() < s2.isbn(); } );

    return 0;
}
