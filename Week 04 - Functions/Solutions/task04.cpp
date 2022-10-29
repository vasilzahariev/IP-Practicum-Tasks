#include <iostream>

int min(int firstNumber, int secondNumber);
int max(int firstNumber, int secondNumber);

int main() {
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int fourthNumber;
    
    std::cin >> firstNumber >> secondNumber >> thirdNumber >> fourthNumber;
    
    std::cout << "Min: " << min(firstNumber, min(secondNumber, min(thirdNumber, fourthNumber))) << std::endl;
    std::cout << "Max: " << max(firstNumber, max(secondNumber, max(thirdNumber, fourthNumber))) << std::endl;

    return 0;
}

int min(int firstNumber, int secondNumber) {
    return (firstNumber < secondNumber ? firstNumber : secondNumber);
}

int max(int firstNumber, int secondNumber) {
    return (firstNumber > secondNumber ? firstNumber : secondNumber);
}
