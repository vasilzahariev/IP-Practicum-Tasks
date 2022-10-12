#include <iostream>

int main() {
    int firstNumber;
    int secondNumber;

    std::cin >> firstNumber >> secondNumber;

    int sum = firstNumber + secondNumber;
    int diffrence = firstNumber + secondNumber;
    int product = firstNumber * secondNumber;
    int quotient = firstNumber / secondNumber;

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Diffrence = " << diffrence << std::endl;
    std::cout << "Product = " << product << std::endl;
    std::cout << "Quotient = " << quotient << std::endl;

    return 0;
}
