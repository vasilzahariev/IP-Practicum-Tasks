#include <iostream>

unsigned absolute(int number);

int main() {
    int number;

    std::cin >> number;

    std::cout << absolute(number) << std::endl;

    return 0;
}

unsigned absolute(int number) {
    return (number >= 0 ? number : (-1 * number));
}
