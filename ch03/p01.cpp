#include <iostream>
#include <string>

using std::string;

int main() {
    string s1;
    string s2(s1);
    string s3(10, 'x');
    string s4 = string(2, 'c');
    std::cout << s4.size() << std::endl;
    std::cout << s4.empty() << std::endl;
    string ss, sss, ss1;
    std::cin >> ss >> sss;
    std::cout << ss << sss << std::endl;
    std::cin >> ss1;
    std::cout << ss1 << std::endl;
    return 0;
}
