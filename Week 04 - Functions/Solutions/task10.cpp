#include <iostream>

int toBinary(int decimalNumber);

int main() {
    int number;

    std::cin >> number;

    std::cout << toBinary(number) << std::endl;

    return 0;
}

int toBinary(int decimalNumber) {
    int binaryNumber = 0;
    unsigned multiplier = 1;

    while (decimalNumber != 0) {
        binaryNumber += multiplier * (decimalNumber % 2);
        multiplier *= 10;

        decimalNumber /= 2;
    }

    return binaryNumber;
}
