#include <iostream>
#include "Sales_item.h"

int main() {
    int cnt = 1;
    Sales_item currBook, book;
    if(std::cin >> currBook) {
        cnt = 1;
        while(std::cin >> book) {
            if(currBook.isbn() == book.isbn()) {
                cnt++;
            }
            else {
                std::cout << currBook << " ocurrs " << cnt << " times." << std::endl;
                currBook = book;
                cnt = 1;
            }
        }
        std::cout << currBook << " occurs " << cnt << " times." << std::endl;
    }

    return 0;
}
