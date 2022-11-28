#pragma once

#include <iostream>

constexpr std::size_t MAX_CAPACITY = 100;

void ReadMatrix(int matrix[MAX_CAPACITY][MAX_CAPACITY], std::size_t rows, std::size_t cols) {
    for (std::size_t row{ 0 }; row < rows; ++row) {
        for (std::size_t col{ 0 }; col < cols; ++col) {
            std::cin >> matrix[row][col];
        }
    }
}

void PrintMatrix(int matrix[MAX_CAPACITY][MAX_CAPACITY], std::size_t rows, std::size_t cols) {
    for (std::size_t row{ 0 }; row < rows; ++row) {
        for (std::size_t col{ 0 }; col < cols; ++col) {
            std::cout << matrix[row][col] << ' ';
        }
        std::cout << std::endl;
    }
}

void CopyMatrix(int source[][MAX_CAPACITY], int destination[][MAX_CAPACITY], std::size_t rows, std::size_t cols) {
    for (std::size_t row = 0; row < rows; ++row) {
        for (std::size_t col = 0; col < cols; ++col) {
            destination[row][col] = source[row][col];
        }
    }
}
