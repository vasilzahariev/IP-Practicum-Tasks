#include <iostream>

void PrintArray(int arr[], std::size_t size);

void GenCombs(int set[], std::size_t n, int arr[], std::size_t k, std::size_t index, int start = 0);

int main() {
    constexpr std::size_t CAPACITY{ 100 };

    int set[CAPACITY];
    std::size_t n;

    std::cin >> n;

    for (std::size_t index = 0; index < n; ++index) {
        std::cin >> set[index];
    }

    std::size_t k;

    std::cin >> k;

    int arr[CAPACITY];

    GenCombs(set, n, arr, k, 0, -1);

    return 0;
}

void PrintArray(int arr[], std::size_t size) {
    for (std::size_t index = 0; index < size; ++index) {
        std::cout << arr[index] << ' ';
    }

    std::cout << std::endl;
}

void GenCombs(int set[], std::size_t n, int arr[], std::size_t k, std::size_t index, int start) {
    if (index >= k) {
        PrintArray(arr, k);
    } else {
        for (int i = start + 1; i < n; ++i) {
            arr[index] = set[i];

            GenCombs(set, n, arr, k, index + 1, i);
        }
    }
}
