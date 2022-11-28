#include "Utility.h"

int main() {
    int firstMatrix[MAX_CAPACITY][MAX_CAPACITY];
    int secondMatrix[MAX_CAPACITY][MAX_CAPACITY];

    std::size_t rows{ 0 };
    std::size_t cols{ 0 };

    std::cin >> rows >> cols;

    ReadMatrix(firstMatrix, rows, cols);
    ReadMatrix(secondMatrix, rows, cols);

    int sumMatrix[MAX_CAPACITY][MAX_CAPACITY];

    for (std::size_t row = 0; row < rows; ++row) {
        for (std::size_t col = 0; col < cols; ++col) {
            sumMatrix[row][col] = firstMatrix[row][col] + secondMatrix[row][col];
        }
    }

    PrintMatrix(sumMatrix, rows, cols);

    return 0;
}
