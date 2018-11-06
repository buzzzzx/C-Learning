#ifndef P7_57_H
#define P7_57_H

#include <iostream>

using namespace std;

class Account {

public:
    void calculate() { amout += amout * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; }
    
private:
    string owner;
    double amout;
    static double interestRate;
    static constexpr double todayRate = 42.23;
    static double initRate() { return todayRate; }

};

#endif
