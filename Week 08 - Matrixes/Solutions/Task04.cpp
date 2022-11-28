#include "Utility.h"

void MultiplyMatrixByAScalar(int matrix[MAX_CAPACITY][MAX_CAPACITY], std::size_t rows, std::size_t cols, int scalar);

int main() {
    int matrix[MAX_CAPACITY][MAX_CAPACITY];
    int scalar{ 0 };
    std::size_t rows{ 0 };
    std::size_t cols{ 0 };

    std::cin >> rows >> cols;

    ReadMatrix(matrix, rows, cols);
    std::cin >> scalar;
    
    MultiplyMatrixByAScalar(matrix, rows, cols, scalar);
    PrintMatrix(matrix, rows, cols);

    return 0;
}

void MultiplyMatrixByAScalar(int matrix[MAX_CAPACITY][MAX_CAPACITY], std::size_t rows, std::size_t cols, int scalar) {
    for (std::size_t row{ 0 }; row < rows; ++row) {
        for (std::size_t col{ 0 }; col < cols; ++col) {
            matrix[row][col] *= scalar;
        }
    }
}
