#include <iostream>

using namespace std;

// origin
string (&func(int i))[10];
// 函数别名
using Str = string[10];
Str &func(int i);
// 尾置返回类型
auto func(int i) -> string(&)[10];
// decltype
string s[10];
decltype(s) &
func(int i);
