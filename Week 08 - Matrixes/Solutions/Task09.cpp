#include "Utility.h"

void SpiralTraversal(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols);

int main() {
    int matrix[MAX_CAPACITY][MAX_CAPACITY];
    std::size_t rows{ 0 };
    std::size_t cols{ 0 };

    std::cin >> rows >> cols;

    ReadMatrix(matrix, rows, cols);

    SpiralTraversal(matrix, rows, cols);

    return 0;
}

void SpiralTraversal(int matrix[][MAX_CAPACITY], std::size_t rows, std::size_t cols) {
    int up{ 0 };
    int down{ rows - 1 };
    int left{ 0 };
    int right{ cols - 1 };
    std::size_t counter{ 0 };

    while (counter < rows * cols) {
        for (int i = left; i <= right; ++i) {
            ++counter;
            std::cout << matrix[up][i] << ' ';
        }
        ++up;

        for (int i = up; i <= down; ++i) {
            ++counter;
            std::cout << matrix[i][right] << ' ';
        }
        --right;

        for (int i = right; i >= left; --i) {
            ++counter;
            std::cout << matrix[down][i] << ' ';
        }
        --down;

        for (int i = down; i >= up; --i) {
            ++counter;
            std::cout << matrix[i][left] << ' ';
        }
        ++left;
    }

    std::cout << std::endl;
}
