#include <iostream>

int main() {
    unsigned rows;

    std::cin >> rows;

    for (unsigned row = 1; row <= rows; ++row) {
        int value = 1;

        for (unsigned space = 1; space <= rows - row; ++space) {
            std::cout << "  ";
        }

        for (unsigned col = 1; col <= row; ++col) {
            std::cout << value << "   ";

            value = value * (row - col) / col;
        }

        std::cout << std::endl;
    }

    return 0;
}
