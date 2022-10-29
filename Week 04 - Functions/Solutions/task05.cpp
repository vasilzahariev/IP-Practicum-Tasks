#include <iostream>

unsigned countDigitInNumber(unsigned digit, int number);
int findMostCommonDigit(int number);

int main() {
    int number;

    std::cin >> number;

    std::cout << findMostCommonDigit(number) << std::endl;

    return 0;
}

unsigned countDigitInNumber(unsigned digit, int number) {
    unsigned counter = 0;
    
    while (number != 0) {
        const unsigned CURRENT_DIGIT = number % 10;

        if (digit == CURRENT_DIGIT)
            ++counter;

        number /= 10;
    }
    
    return counter;
}

int findMostCommonDigit(int number) {
    unsigned mostCommonDigit = 0;
    unsigned countOfMostCommonDigit = 0;

    for (unsigned digit = 0; digit <= 9; ++digit) {
        const unsigned COUNT_OF_DIGIT = countDigitInNumber(digit, number);

        if (COUNT_OF_DIGIT >= countOfMostCommonDigit && COUNT_OF_DIGIT != 0) {
            mostCommonDigit = digit;
            countOfMostCommonDigit = COUNT_OF_DIGIT;
        }
    }
    
    return mostCommonDigit;
}
