#ifndef P7_4.h
#define P7_4.h

#include <iostream>


using namespace std;

class Person;

istream &read(istream &is, Person &ps);

class Person {

    friend istream &read(istream &is, Person &ps);
    friend ostream &print(ostream &os, const Person &ps);

public:
    // constructor
    Person() = default;
    Person(const string &name, const string &addr): name(name), addr(addr) {}
    Person(istream &is); 
    string get_name() const {
        return name;
    }
    string get_addr() const {
        return addr;
    }

private:
    string name;
    string addr;
};

istream &read(istream &is, Person &ps);
ostream &print(ostream &os, const Person &ps);

Person::Person(istream &is) {
    read(is, *this);
}

istream &read(istream &is, Person &ps) {
    is >> ps.name >> ps.addr;
    return is;
}

ostream &print(ostream &os, const Person &ps) {
    os << ps.name << ps.addr;
    return os;
}


int main() {
    
    

    return 0;
}

#endif
