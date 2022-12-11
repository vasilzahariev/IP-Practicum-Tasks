#include <iostream>

void PrintArray(int arr[], std::size_t size);

void Generate01s(int arr[], std::size_t size, std::size_t index = 0);

int main() {
    constexpr std::size_t CAPACITY{ 100 };
    
    int n;
    int arr[CAPACITY];

    std::cin >> n;

    Generate01s(arr, n);

    return 0;
}

void PrintArray(int arr[], std::size_t size) {
    for (std::size_t index = 0; index < size; ++index) {
        std::cout << arr[index];
    }

    std::cout << std::endl;
}

void Generate01s(int arr[], std::size_t size, std::size_t index) {
    if (index >= size) {
        PrintArray(arr, size);
    } else {
        for (short i = 0; i <= 1; ++i) {
            arr[index] = i;

            Generate01s(arr, size, index + 1);
        }
    }
}
