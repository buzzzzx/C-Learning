#include "p7_12.h"

using namespace std;

int main() {

    Sales_data s1("s1", 1, 20.0);
    print(cout, s1) << endl;

    Sales_data s2;
    print(cout, s2) << endl;

    Sales_data s3("s3");
    print(cout, s3) << endl;

    Sales_data s4(cin);
    print(cout, s4) << endl;

    return 0;
}
