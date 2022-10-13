#include <iostream>

int main() {
    double firstNumber = 0;
    double secondNumber = 0;

    std::cin >> firstNumber >> secondNumber;

    double sum = firstNumber + secondNumber;
    double diffrence = firstNumber + secondNumber;
    double product = firstNumber * secondNumber;
    double quotient = firstNumber / secondNumber;

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Diffrence = " << diffrence << std::endl;
    std::cout << "Product = " << product << std::endl;
    std::cout << "Quotient = " << quotient << std::endl;

    return 0;
}