#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


using namespace std;


struct PersonInfo
{
	string name;
	vector<string> phones;
};

bool valid(const string& str)
{
	return isdigit(str[0]);
}

string format(const string& str)
{
	return str;
}


int main() {

    ifstream inputFile("contact.txt");
    string line, word;
    vector<PersonInfo> Person;

    if(!inputFile) {
        cerr << "no phone numbers?" << endl;
	    return -1;
    }

    while(getline(inputFile, line)) {
        PersonInfo person;
        istringstream record(line);
        record >> person.name;
        while(record >> word) {
            person.phones.push_back(word);
        }
        Person.push_back(person);
    }

    for(const auto &entry: Person) {
        ostringstream Formatted, BadNum;
        for(const auto &num: entry.phones) {
            if(!valid(num)) {
                BadNum << " " << num;
            }
            else {
                Formatted << " " << format(num);
            }
        }

        if(BadNum.str().empty()) {
            cout << entry.name << " " << Formatted.str() << endl; 
        }
        else {
            cerr << "input error: " << BadNum.str() << endl;
        }
    }

    return 0;
}
