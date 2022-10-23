#include <iostream>

int main() {
    unsigned number;

    std::cin >> number;

    unsigned divisorsSum = 1;

    bool isPrime = true;

    for (unsigned divisor = 2; divisor < number; ++divisor) {
        if (number % divisor == 0) {
            isPrime = false;

            divisorsSum += divisor;
        }
    }

    std::cout << std::boolalpha << "Prime: " << isPrime << std::endl;
    std::cout << "Perfect: " << (number == divisorsSum) << std::endl;

    return 0;
}
