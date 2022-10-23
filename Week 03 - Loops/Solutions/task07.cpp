#include <iostream>

int main() {
    int firstNumber;
    int secondNumber;
    
    std::cin >> firstNumber >> secondNumber;

    unsigned greatestCommonDivisor = 1;
    const int MIN_NUMBER = firstNumber > secondNumber ? secondNumber : firstNumber;

    for (unsigned divisor = 2; divisor <= MIN_NUMBER; ++divisor) {
        if (firstNumber % divisor == 0 && secondNumber % divisor == 0) {
            greatestCommonDivisor = divisor;
        }
    }

    std::cout << greatestCommonDivisor << std::endl;

    return 0;
}
