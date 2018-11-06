#include <iostream>

using namespace std;

struct Sales_data {

    string isbn() const {
        return bookNo;
    }

    Sales_data& combine(const Sales_data &rhs);

    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    if(units_sold) {
        return revenue/units_sold;
    }
    else {
        return 0;
    }
}


int main() {
    
    Sales_data total;
    double price;
    if(cin >> total.bookNo >> total.units_sold >> price) {
        total.revenue = total.units_sold * price;
        Sales_data trans; 
        while(cin >> trans.bookNo >> trans.units_sold >> price) {
            trans.revenue = trans.units_sold * price;
            if(trans.isbn() == total.isbn()) {
                total.combine(trans);
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

