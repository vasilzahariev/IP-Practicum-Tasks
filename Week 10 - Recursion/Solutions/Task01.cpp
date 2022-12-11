#include <iostream>

int Power(int number, unsigned n);

int main() {
    int number;
    unsigned n;

    std::cin >> number >> n;

    std::cout << Power(number, n) << std::endl;

    return 0;
}

int Power(int number, unsigned n) {
    if (n == 0) {
        return 1;
    }

    return number * Power(number, n - 1);
}
