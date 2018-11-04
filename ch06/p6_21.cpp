#include <iostream>

using namespace std;

int compare(const int a, const int *b) {
    return (a > *b) ? a : *b;
}


