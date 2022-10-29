#include <iostream>

bool isLeap(unsigned int year);

int main() {
    unsigned int year;

    std::cin >> year;

    std::cout << (isLeap(year) ? "Yes" : "No") << std::endl;

    return 0;
}

bool isLeap(unsigned int year) {
    return ((year >= 1582) &&
            (year % 4 == 0) &&
            (year % 100 != 0 || year % 400 == 0));
}
