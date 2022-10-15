#include <iostream>

int main() {
    int firstNumber = 0;
    int secondNumber = 0;
    int thirdNumber = 0;

    std::cin >> firstNumber >> secondNumber >> thirdNumber;

    int minNum = (firstNumber < secondNumber ? (firstNumber < thirdNumber ? firstNumber : (secondNumber < thirdNumber ? secondNumber : thirdNumber)) : (secondNumber < thirdNumber ? secondNumber : thirdNumber));
    int maxNum = (firstNumber > secondNumber ? (firstNumber > thirdNumber ? firstNumber : (secondNumber > thirdNumber ? secondNumber : thirdNumber)) : (secondNumber > thirdNumber ? secondNumber : thirdNumber));
    int middleNum = (minNum == firstNumber ? (maxNum == secondNumber ? thirdNumber : secondNumber) : (minNum == secondNumber ? (maxNum == firstNumber ? thirdNumber : firstNumber) : (maxNum == firstNumber ? secondNumber : firstNumber)));

    std::cout << minNum << ' ' << middleNum << ' ' << maxNum << std::endl;

    return 0;
}
