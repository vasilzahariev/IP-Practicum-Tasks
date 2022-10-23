#include <iostream>

int main() {
    unsigned endNumber = 0;

    std::cin >> endNumber;

    for (unsigned number = 1; number <= endNumber; ++number) {
        std::cout << number << ' ';
    }

    std::cout << std::endl;

    return 0;
}
