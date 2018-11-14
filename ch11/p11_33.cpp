#include <iostream>
#include <fstream>
#include <sstream>
#include <map>


using namespace std;


map<string, string> buildMap(ifstream &file_rules) {
    map<string, string> map_rules;
    string line, key;
    while (file_rules >> key && getline(file_rules, line)) {
        if (line.size() > 1) {
            map_rules[key] = line.substr(1);
        }
        else {
            throw runtime_error("no rule for " + key);
        }
    }
    return map_rules;
}


const string &transform(const map<string, string> &map_rules, const string &key) {
    auto r = map_rules.find(key);
    if (r != map_rules.cend()) {
        return r->second;
    }
    else {
        return key;
    }
}


void word_transform(ifstream &file_rules, ifstream &input) {
    auto map_rules = buildMap(file_rules);
    string line;
    while (getline(input, line)) {
        istringstream text(line);
        string key;
        bool firstWord = true;
        while (text >> key) {
            if (firstWord) {
                firstWord = false;
            }
            else {
                cout << " ";
            }
            cout << transform(map_rules, key);
        }
        cout << endl;
    }
}


int main() {
    
    ifstream file_rules("file_rules.txt");
    ifstream file_words("file_words.txt");
    word_transform(file_rules, file_words);

    return 0;
}
