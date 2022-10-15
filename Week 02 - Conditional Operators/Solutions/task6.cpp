#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double result = 0;
    double firstNumber = 0;
    char symbol = '0';

    std::cin >> firstNumber >> symbol;

    if (symbol == 'V') {
        result = std::sqrt(firstNumber);
    } else {
        double secondNumber;

        std::cin >> secondNumber;

        if (symbol == '+') {
            result = firstNumber + secondNumber;
        } else if (symbol == '-') {
            result = firstNumber - secondNumber;
        } else if (symbol == '*') {
            result = firstNumber * secondNumber;
        } else if (symbol == '/') {
            result = firstNumber / secondNumber;
        } else if (symbol == '^') {
            result = std::pow(firstNumber, secondNumber);
        }
    }

    /*
    Сега за закръглянето можете да си изберете или да използвате:
        1) std::cout.precision(n) - преди std::cout-а (част от "iostream")
        2) std::setprecision(n) - като част от изхода към конзолата (не ще трябва да добавите "iomanip" библиотеката)
    няма значение кое ще изберете.

    използваме std::fixed, за да може да фиксираме с 2 числа след запетаята дори когато е цяло числото
    */

    std::cout.precision(2);

    std::cout << std::setprecision(2) << std::fixed << result << std::endl;

    return 0;
}
