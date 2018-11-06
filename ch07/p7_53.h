#ifndef P7_53_H
#define P7_53_H

#include <iostream>

using namespace std;

class Debug {

public:
    constexpr Debug(bool h, bool i, bool o): hw(h), io(i), other(o) {}
    constexpr Debug(bool b = true): hw(b), io(b), other(b) {}
    constexpr bool any() {
        return hw || io || other;
    }
    void set_hw(bool b) {
        hw = b;
    }
    void set_io(bool b) {
        io = b;
    }
    void set_other(bool b) {
        other = b;
    }

private:
    bool hw;
    bool io;
    bool other;

};

#endif
