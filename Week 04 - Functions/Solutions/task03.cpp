#include <iostream>

bool isLeap(unsigned year);

int main() {
    unsigned year;

    std::cin >> year;

    std::cout << (isLeap(year) ? "Yes" : "No") << std::endl;

    return 0;
}

bool isLeap(unsigned year) {
    return ((year >= 1582) &&
            (year % 4 == 0) &&
            (year % 100 != 0 || year % 400 == 0));
}
