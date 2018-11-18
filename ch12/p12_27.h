#ifndef P_12_27_H
#define P_12_27_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include <set>
#include <sstream>

using namespace std;

class QueryResult;

class TextQuery {
    friend void read(ifstream &in_file, TextQuery &item);

public:
    TextQuery() = default;
    TextQuery(ifstream &in_file);
    QueryResult &query(const string &s) const;
private:
    shared_ptr<vector<string>> lines;
    map<string, shared_ptr<set<size_t>>> word_num;
};

void read(ifstream &in_file, TextQuery &item);

TextQuery::TextQuery(ifstream &in_file) {
    read(in_file, *this);
}

void read(ifstream &in_file, TextQuery &item) {
    string line, word;
    size_t i = 1;
    while (getline(in_file, line)) {
        item.lines->push_back(line);
        istringstream record(line);
        while (record >> word) {
            item.word_num[word]->insert(i);
        }
        ++i;
    }
    in_file.close();
}



class QueryResult {
    friend ostream &print(ostream &os, const QueryResult &result);
public:
    QueryResult() = default;
    QueryResult(const string &s, shared_ptr<set<size_t>> n, shared_ptr<vector<string>> l): s(s), nums(n), lines(l) {}

private:
    string s;
    shared_ptr<set<size_t>> nums;
    shared_ptr<vector<string>> lines;
};

ostream &print(ostream &os, const QueryResult &result) {
    os << result.s << " occurs " << result.nums->size() << endl;
    for (auto num : *result.nums) {
        os << "\t (line " << num + 1 << ")"
           << *(result.lines->begin() + num) << endl;
    }
    return os;
}

QueryResult &TextQuery::query(const string &s) const {
    if (word_num.count(s)) {
        auto nums_set = word_num.at(s);
        return QueryResult(s, nums_set, lines);
    } else {
        throw out_of_range("There is no word: " + s);
    }
}
#endif
