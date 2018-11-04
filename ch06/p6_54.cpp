#include <iostream>
#include <vector>

using namespace std;

int func(int, int);

vector<decltype(func) *> f_vec;
