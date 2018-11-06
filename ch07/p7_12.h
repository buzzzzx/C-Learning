#ifndef P7_11
#define P7_11

#include <iostream>

using namespace std;

class Sales_data;

istream &read(istream &is, Sales_data &item);

class Sales_data {
    
    // 友元声明
    friend istream &read(istream &is, Sales_data &item);
    friend ostream &print(ostream &os, const Sales_data &item);

public:

    // constructor
    Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p*n) {
        cout << "Sales_data(const string &s, unsigned n, double p): ..." << endl;
    }
    Sales_data(): Sales_data(" ", 0, 0.0) {
        cout << "Sales_data()" << endl;
    }
    Sales_data(const string &s): Sales_data(s, 0, 0.0) {
        cout << "Sales_data(const string &s)" << endl;
    }
    Sales_data(istream &is): Sales_data() {
        read(is, *this); 
        cout << "Sales_data(istream &is)" << endl;
    }
    // 7.14
    // Sales_data(): units_sold(0), revenue(0.0) {}

    // member function
    string isbn() const {
        return bookNo;
    }
    
    Sales_data &combine(const Sales_data &rhs);

private:
    
    inline double avg_price() const;
    // member variable
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

};

ostream &print(ostream &os, const Sales_data &item);
istream &read(istream &is, Sales_data &item);

double Sales_data::avg_price() const {
    if(units_sold){
        return revenue/units_sold;
    }
    else {
        return 0;
    }
}

Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

istream &read(istream &is, Sales_data &item) {
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " "
       << item.units_sold << " "
       << item.revenue << " "
       << item.avg_price() << " ";

    return os;
}

#endif
