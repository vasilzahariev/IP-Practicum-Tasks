#include "Utility.h"

void ZigZagTraverse(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols);

int main() {
    int matrix[MAX_CAPACITY][MAX_CAPACITY];
    std::size_t rows{ 0 };
    std::size_t cols{ 0 };

    std::cin >> rows >> cols;

    ReadMatrix(matrix, rows, cols);

    ZigZagTraverse(matrix, rows, cols);

    return 0;
}

void ZigZagTraverse(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols) {
    for (std::size_t row{ 0 }; row < rows; ++row) {
        for (std::size_t col = 0; col < cols; ++col) {
            std::cout << matrix[row][(row % 2 == 0 ? col : (cols - col - 1))] << ' ';
        }
    }

    std::cout << std::endl;
}
