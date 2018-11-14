#include <iostream>
#include <map>


using namespace std;


int main() {

    multimap<string, string> info= { 
        {"zhuixn", "C++ Primer Learning"}, 
        {"zhuxin", "Java biubiu"},
        {"zly", "abc"},
        {"lzy", "Java sprint"},
        {"zly", "Gre Study"},
        {"aaa", "Aloha"}
    };
    string search_item;
    cin >> search_item;
    auto fir = info.find(search_item);
    if (fir != info.cend()) {
        info.erase(search_item);
    } 
    for (const auto &p : info) {
        cout << p.first << " "
             << p.second << endl;
    }

    return 0;
}
