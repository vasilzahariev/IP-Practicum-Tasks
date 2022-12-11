#include <iostream>

unsigned CountDigits(unsigned number);

int main() {
    unsigned number;

    std::cin >> number;

    std::cout << CountDigits(number) << std::endl;

    return 0;
}

unsigned CountDigits(unsigned number) {
    if (number == 0) {
        return 0;
    }

    return 1 + CountDigits(number / 10);
}
