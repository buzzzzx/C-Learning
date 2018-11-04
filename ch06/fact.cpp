#include "Chapter6.h"

int fact(int i) {
    int r = 1;
    while(i > 1) {
        r *= i--;
    }
    return r;
}
