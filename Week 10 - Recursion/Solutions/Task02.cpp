#include <iostream>

long long Factorial(int number);

int main() {
    int number;

    std::cin >> number;

    std::cout << Factorial(number) << std::endl;

    return 0;
}

long long Factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }

    return number * Factorial(number - 1);
}
