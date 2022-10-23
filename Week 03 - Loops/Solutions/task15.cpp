#include <iostream>

int main() {
    unsigned rows;

    std::cin >> rows;

    for (unsigned row = 1; row <= rows; ++row) {
        for (unsigned col = 1; col <= row; ++col) {
            std::cout << '*';
        }

        std::cout << std::endl;
    }

    return 0;
}
