#include <iostream>

int main() {
    unsigned recSide;

    std::cin >> recSide;

    for (unsigned row = 0; row < recSide; ++row) {
        for (unsigned col = 0; col < recSide; ++col) {
            if (row == 0 || row == recSide - 1 || col == 0 || col == recSide - 1)
                std::cout << '#';
            else
                std::cout << ' ';
        }

        std::cout << std::endl;
    }

    return 0;
}
