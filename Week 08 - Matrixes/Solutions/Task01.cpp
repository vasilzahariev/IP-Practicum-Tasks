#include "Utility.h"


int main() {    
    int matrix[MAX_CAPACITY][MAX_CAPACITY];
    std::size_t rows;
    std::size_t cols;

    std::cin >> rows >> cols;

    ReadMatrix(matrix, rows, cols);

    PrintMatrix(matrix, rows, cols);

    return 0;
}
