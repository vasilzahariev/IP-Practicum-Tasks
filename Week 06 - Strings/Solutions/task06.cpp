#include <iostream>
#include <cstring>

void reverse(char str[]);

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char str[STR_CAPACITY];

    std::cin >> str;

    reverse(str);

    std::cout << str << std::endl;
    
    return 0;
}

void reverse(char str[]) {
    const std::size_t SIZE = strlen(str);
    const std::size_t HALF_SIZE = strlen(str) / 2;

    for (std::size_t index = 0; index < HALF_SIZE; ++index) {
        const char TEMP = str[index];

        str[index] = str[SIZE - index - 1];
        str[SIZE - index - 1] = TEMP;
    }
}
