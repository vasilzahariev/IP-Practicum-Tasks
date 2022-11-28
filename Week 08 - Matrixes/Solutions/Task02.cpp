#include "Utility.h"

int FindMainDiagonalSum(int matrix[][MAX_CAPACITY], std::size_t rows);
int FindSecondarydiagonalProduct(int matrix[][MAX_CAPACITY], std::size_t rows);

int main() {
    int matrix[MAX_CAPACITY][MAX_CAPACITY];

    std::size_t rows{ 0 };
    std::size_t cols{ 0 };

    std::cin >> rows >> cols;

    ReadMatrix(matrix, rows, cols);
    PrintMatrix(matrix, rows, rows);

    std::cout << FindMainDiagonalSum(matrix, rows) << ' ';
    std::cout << FindSecondarydiagonalProduct(matrix, rows) << std::endl;

    return 0;
}

int FindMainDiagonalSum(int matrix[][MAX_CAPACITY], std::size_t rows) {
    int sum{ 0 };
    
    for (std::size_t row{ 0 }; row < rows; ++row) {
        sum += matrix[row][row];
    }

    return sum;
}

int FindSecondarydiagonalProduct(int matrix[][MAX_CAPACITY], std::size_t rows) {
    int product{ 1 };

    for (std::size_t row{ 0 }; row < rows; ++row) {
        product *= matrix[row][rows - row - 1];
    }

    return product;
}
