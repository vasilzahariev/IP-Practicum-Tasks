#include <iostream>

int main() {
    double firstNumber = .0;
    double secondNumber = .0;
    double thirdNumber = .0;

    std::cin >> firstNumber >> secondNumber >> thirdNumber;

    unsigned negativeNumbersCounter = 0;

    if (firstNumber < 0) {
        ++negativeNumbersCounter;
    }

    if (secondNumber < 0) {
        ++negativeNumbersCounter;
    }

    if (thirdNumber < 0) {
        ++negativeNumbersCounter;
    }

    std::cout << (negativeNumbersCounter % 2 == 0 ? '+' : '-') << std::endl;

    return 0;
}
