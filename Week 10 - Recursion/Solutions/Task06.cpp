#include <iostream>

void ReadArrayAndItsSize(int numbers[], std::size_t& size);
int Sum(int* curr, int* end);

int main() {
    constexpr std::size_t CAPACITY{ 100 };

    int numbers[CAPACITY];
    std::size_t size{ 0 };

    ReadArrayAndItsSize(numbers, size);
    
    std::cout << Sum(numbers, &numbers[size]) << std::endl;

    return 0;
}

void ReadArrayAndItsSize(int numbers[], std::size_t& size) {
    std::cin >> size;

    for (std::size_t index{ 0 }; index < size; ++index) {
        std::cin >> numbers[index];
    }
}

int Sum(int* curr, int* end) {
    if (curr == end) {
        return 0;
    }

    return *curr + Sum(curr + 1, end);
}
