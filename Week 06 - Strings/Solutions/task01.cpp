#include <iostream>

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char str[STR_CAPACITY];

    std::cin >> str;

    std::cout << str << std::endl;

    return 0;
}
