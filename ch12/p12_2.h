#ifndef P_12_2_H
#define P_12_2_H

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <initializer_list>

using namespace std;


class StrBlobPtr;

bool equal(const StrBlobPtr &s1, const StrBlobPtr &s2);

class StrBlob {
    friend class StrBlobPtr; 
public:
    typedef vector<string>::size_type size_type;
    // constructor
    StrBlob(): data(make_shared<vector<string>>()) {};
    StrBlob(initializer_list<string> lst): data(make_shared<vector<string>>(lst)) {};
    // member function
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const string &s) { data->push_back(s); }
    void pop_back();
    const string &front() const;
    const string &back() const;
    StrBlobPtr begin();
    StrBlobPtr end();
private:
    shared_ptr<vector<string>> data;
    void check(const size_type i, const string &msg) const;
};

void StrBlob::check(const size_type i, const string &msg) const {
    if (i >= data->size()) {
        throw out_of_range(msg);
    }
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

const string &StrBlob::front() const {
   check(0, "front on empty StrBlob");
   return data->front();
}

const string &StrBlob::back() const {
    check(0, "back on empty StrBlob");
    return data->back();
}


class StrBlobPtr {
    friend bool equal(const StrBlobPtr &s1, const StrBlobPtr &s2);
public:
    typedef vector<string>::size_type size_type;
    StrBlobPtr(): curr(0) {  }
    StrBlobPtr(StrBlob &sb, size_type st = 0): wptr(sb.data), curr(st) {  }
    
    string &deref() const;
    StrBlobPtr &incr();
private:
    shared_ptr<vector<string>> check(size_type i, const string &msg) const; 
    weak_ptr<vector<string>> wptr;
    size_type curr;
};

shared_ptr<vector<string>> StrBlobPtr::check(size_type i, const string &msg) const {
    auto ret = wptr.lock();
    if (!ret) {
        throw runtime_error("unbound weak_ptr.");
    }
    if (i >= ret->size()) {
        throw out_of_range("msg");
    }
    return ret;
}

string &StrBlobPtr::deref() const {
    auto r = check(curr, "dereference past end.");
    return (*r)[curr];
}

StrBlobPtr &StrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

StrBlobPtr StrBlob::begin() {
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end() {
	return StrBlobPtr(*this, data->size());
}

bool equal(const StrBlobPtr &s1, const StrBlobPtr &s2) {
    if (s1.curr == s2.curr) {
        return true;
    }
    else {
        return false;
    }

}

#endif
