#include <iostream>

using namespace std;

struct Sales_data {
    string isbn() const {
        return this->bookNo;
    } 
    double avg_price() const;
    Sales_data& combine(const Sales_data &rhs);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

double Sales_data::avg_price() const {
    if(units_sold) {
        return revenue/units_sold;
    }
    else {
        return 0;
    }
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main() {

    return 0;
}
