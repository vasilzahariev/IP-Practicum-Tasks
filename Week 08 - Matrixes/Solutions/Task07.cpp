#include "Utility.h"
#include <cstring>

void TransposeMatrix(int matrix[MAX_CAPACITY][MAX_CAPACITY], std::size_t rows, std::size_t cols);
void ReverseRows(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols);

void RotateMatrixLeft(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols);
void RotateMatrixRight(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols);

int main() {
    int matrix[MAX_CAPACITY][MAX_CAPACITY];
    std::size_t rows{ 0 };
    std::size_t cols{ 0 };

    std::cin >> rows >> cols;

    ReadMatrix(matrix, rows, cols);

    constexpr std::size_t ROTATION_CAPACITY = 10;
    char rotation[ROTATION_CAPACITY];

    std::cin >> rotation;

    if (strcmp(rotation, "left") == 0) {
        RotateMatrixLeft(matrix, rows, cols);
    } else if (strcmp(rotation, "right") == 0) {
        RotateMatrixRight(matrix, rows, cols);
    } else {
        std::cout << "Invalid input!" << std::endl;
    }
    
    std::swap(rows, cols);

    PrintMatrix(matrix, rows, cols);

    return 0;
}

void TransposeMatrix(int matrix[MAX_CAPACITY][MAX_CAPACITY], std::size_t rows, std::size_t cols) {
    int temp[MAX_CAPACITY][MAX_CAPACITY];

    CopyMatrix(matrix, temp, rows, cols);

    for (std::size_t row = 0; row < rows; ++row) {
        for (std::size_t col = 0; col < cols; ++col) {
            matrix[col][row] = temp[row][col];
        }
    }
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

void RotateMatrixLeft(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols) {
    TransposeMatrix(matrix, rows, cols);
    ReverseRows(matrix, cols, rows);
}

void RotateMatrixRight(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols) {
    ReverseRows(matrix, rows, cols);
    TransposeMatrix(matrix, rows, cols);
}
