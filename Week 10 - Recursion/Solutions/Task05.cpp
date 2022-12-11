#include <iostream>
#include <cmath>

int Power(int number, unsigned n);
int ReverseNumber(unsigned number);

int main() {
    unsigned number;

    std::cin >> number;

    std::cout << ReverseNumber(number) << std::endl;

    return 0;
}

int Power(int number, unsigned n) {
    if (n == 0) {
        return 1;
    }

    return number * Power(number, n - 1);
}

int ReverseNumber(unsigned number) {
    if (number == 0) {
        return 0;
    }

    return (number % 10) * Power(10, std::log10(number)) + ReverseNumber(number / 10);
}
