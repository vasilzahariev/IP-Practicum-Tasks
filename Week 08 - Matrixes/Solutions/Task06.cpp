#include "Utility.h"

void ReverseRows(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols);

int main() {
    int matrix[MAX_CAPACITY][MAX_CAPACITY];
    std::size_t rows{ 0 };
    std::size_t cols{ 0 };

    std::cin >> rows >> cols;

    ReadMatrix(matrix, rows, cols);

    ReverseRows(matrix, rows, cols);

    PrintMatrix(matrix, rows, cols);

    return 0;
}

void ReverseRows(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols) {
    int temp[MAX_CAPACITY][MAX_CAPACITY];

    CopyMatrix(matrix, temp, rows, cols);

    for (std::size_t row = 0; row < rows; ++row) {
        for (std::size_t col = 0; col < cols; ++col) {
            matrix[rows - row - 1][col] = temp[row][col];
        }
    }
}
