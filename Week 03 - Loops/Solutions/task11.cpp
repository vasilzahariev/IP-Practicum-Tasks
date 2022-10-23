#include <iostream>

int main() {
    unsigned number;

    std::cin >> number;

    unsigned copyNumber = number;
    unsigned reversedNumber = 0;

    while (copyNumber != 0) {
        const unsigned DIGIT = copyNumber % 10;

        reversedNumber = reversedNumber * 10 + DIGIT;

        copyNumber /= 10;
    }

    std::cout << std::boolalpha << (number == reversedNumber) << std::endl;
    
    return 0;
}
