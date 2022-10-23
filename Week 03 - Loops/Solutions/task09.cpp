#include <iostream>

int main() {
    unsigned number;

    std::cin >> number;

    unsigned reversedNumber = 0;
    unsigned sumOfDigits = 0;

    while (number != 0) {
        const unsigned DIGIT = number % 10;

        reversedNumber = reversedNumber * 10 + DIGIT;
        sumOfDigits += DIGIT;

        number /= 10;
    }
    
    std::cout << "Reversed = " << reversedNumber << std::endl;
    std::cout << "Sum of digits = " << sumOfDigits << std::endl;

    return 0;
}
