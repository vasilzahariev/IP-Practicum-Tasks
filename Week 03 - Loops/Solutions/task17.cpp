#include <iostream>

int main() {
    unsigned rows;

    std::cin >> rows;

    for (unsigned row = 1; row <= rows; ++row) {
        for (unsigned space = 1; space <= rows - row; ++space) {
            std::cout << ' ';
        }

        const unsigned COLS = (2 * row) - 1;

        for (unsigned col = 1; col <= COLS; ++col) {
            std::cout << '*';
        }

        std::cout << std::endl;
    }

    return 0;
}
