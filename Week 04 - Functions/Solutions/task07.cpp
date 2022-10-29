#include <iostream>

bool isPowerOf2(int number);

int main() {
    int number;

    std::cin >> number;

    std::cout << std::boolalpha << isPowerOf2(number) << std::endl;

    return 0;
}

bool isPowerOf2(int number) {
    if (number < 1) {
        return false;
    }

    int powerOf2 = 1;

    while (powerOf2 < number) {
        powerOf2 *= 2;
    }

    return powerOf2 == number;
}
