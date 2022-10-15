#include <iostream>

int main() {
    int firstNumber = 0;
    int secondNumber = 0;

    std::cin >> firstNumber >> secondNumber;

    int sum = firstNumber + secondNumber;
    int diffrence = firstNumber + secondNumber;
    int product = firstNumber * secondNumber;
    int quotient = firstNumber / secondNumber;
    int remainder = firstNumber % secondNumber;

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Diffrence = " << diffrence << std::endl;
    std::cout << "Product = " << product << std::endl;
    std::cout << "Quotient = " << quotient << std::endl;
    std::cout << "Remainder = " << remainder << std::endl;

    return 0;
}
