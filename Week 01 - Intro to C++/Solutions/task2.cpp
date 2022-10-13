#include <iostream>

int main() {
    int number = 0;

    std::cin >> number;

    int sum = 0;
    int digit = number % 10;

    sum += digit;
    number /= 10;

    digit = number % 10;
    sum += digit;
    number /= 10;

    digit = number % 10;
    sum += digit;
    number /= 10;

    digit = number % 10;
    sum += digit;

    std::cout << "Sum of digits = " << sum << std::endl;

    return 0;
}
