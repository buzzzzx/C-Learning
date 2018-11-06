#ifndef P7_23_H
#define P7_23_H

#include <iostream>
#include <vector>

using namespace std;

class Screen;

class Window_mgr {

public:
    using ScreenIndex = vector<Screen>::size_type;
    inline void clean(ScreenIndex);

private:
    vector<Screen> screens;
};

class Screen {

    friend void Window_mgr::clean(ScreenIndex);

public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos h, pos w): height(h), width(w), contents(h*w, ' ') {}
    Screen(pos h, pos w, char c): height(h), width(w), contents(h*w, c) {}
    char get() const {  // 该函数被隐式的定义为内联函数，因为是定义在类内部的成员函数
        return contents[cursor];    
    }
    
    inline char get(pos r, pos c) const;  // 显式定义为 inline
    Screen &move(pos r, pos c);
    Screen &set(char c);
    Screen &set(pos r, pos c, char ch);
    Screen &display(ostream &os) {
        do_display(os);
        return *this;
    }
    const Screen &display(ostream &os) const {
        do_display(os);
        return *this;
    }
    void some_member() const;

private:
    void do_display(ostream &os) const {
        os << contents;
    }

    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
    mutable size_t access_ctr;

};

inline
Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline
Screen &Screen::set(pos r, pos c, char ch) {
    contents[r*width+c] = ch;
    return *this;
}


inline
void Screen::some_member() const {
    ++access_ctr;
}


inline
Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}


void Window_mgr::clean(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = string(s.height*s.width, ' ');
}


#endif
