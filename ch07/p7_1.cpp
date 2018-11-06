#include <iostream>

using namespace std;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    
    Sales_data total;
    double price;
    if(cin >> total.bookNo >> total.units_sold >> price) {
        total.revenue = total.units_sold * price;
        Sales_data trans; 
        while(cin >> trans.bookNo >> trans.units_sold >> price) {
            trans.revenue = trans.units_sold * price;
            if(trans.bookNo == total.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else {
                cout << total.bookNo << " "
                    << total.units_sold << " "
                    << total.revenue << " " << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " "
            << total.units_sold << " "
            << total.revenue << " " << endl;

    }

    return 0;
}
