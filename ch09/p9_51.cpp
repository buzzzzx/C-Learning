#include <iostream>
#include <string>


using namespace std;


class Date {

public:
    Date(const string &date) {
        if (date.find_first_of(",") != string::npos) {
            convert1(date);
        }
        else if (date.find_first_of("/") != string::npos) {
            convert2(date);
        }
        else if (date.find_first_of(" ") != string::npos) {
            convert3(date);
        }
        else {
            year = 1900, month = 1, day = 1;
        }
    }
    
    void get_date() {
        cout << year << " "
             << month << " "
             << day << endl;
    }   

private:
    void convert1(const string &s) {
        year = stoi(s.substr(s.find_first_of(",")+2));
        day = stoi(s.substr(s.find_first_of(" ")+1, s.find_first_of(",")));
        month = convert_month(s);
    }
    void convert2(const string &s) {
        month = stoi(s.substr(0, s.find_first_of("/")));
        day = stoi(s.substr(s.find_first_of("/")+1, s.find_last_of("/")));
        year = stoi(s.substr(s.find_last_of("/")+1));
    }
    void convert3(const string &s) {
        month = convert_month(s);
        day = stoi(s.substr(s.find_first_of(" ")+1, s.find_last_of(" ")));
        year = stoi(s.substr(s.find_last_of(" ")+1));
        
    }
    unsigned convert_month(const string &s) {
        if (s.find("Jan") < s.size()) {
            month = 1;
        }
        else if (s.find("Feb") < s.size()) {
            month = 2;
        }
        else if (s.find("Mar") < s.size()) {
            month = 3;
        }
        else if (s.find("Apr") < s.size()) {
            month = 4;
        }
        else if (s.find("May") < s.size()) {
            month = 5;
        }
        else if (s.find("Jun") < s.size()) {
            month = 6;
        }
        else if (s.find("Jul") < s.size()) {
            month = 7;
        }
        else if (s.find("Aug") < s.size()) {
            month = 8;
        }
        else if (s.find("Sep") < s.size()) {
            month = 9;
        }
        else if (s.find("Oct") < s.size()) {
            month = 10;
        }
        else if (s.find("Nov") < s.size()) {
            month = 11;
        }
        else {
            month = 12;
        }
        return month;
    }
    unsigned year;
    unsigned month;
    unsigned day;
};


int main() {
    
    Date d1("August 1, 2018");
    d1.get_date();
    Date d2("11/11/2018");
    d2.get_date();
    Date d3("May 10 2018");
    d3.get_date();

    return 0;
}
