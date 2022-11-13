#include <iostream>
#include <cstring>

constexpr std::size_t STR_CAPACITY = 1024;

int toInt(char c);
void putDashBetweenOddNumbers(char str[]);

int main() {
    char str[STR_CAPACITY];

    std::cin >> str;

    putDashBetweenOddNumbers(str);

    std::cout << str << std::endl;

    return 0;
}

int toInt(char c) {
    return (int) (c - '0');
}

void putDashBetweenOddNumbers(char str[]) {
    const std::size_t SIZE = strlen(str);
    char result[STR_CAPACITY] = { '\0', };
    std::size_t rIndex = 0;

    for (std::size_t index = 0; index < SIZE; ++index) {
        result[rIndex++] = str[index];

        if (index != (SIZE - 1) && toInt(str[index]) % 2 != 0 && toInt(str[index + 1]) % 2 != 0) {
            result[rIndex++] = '-';
        }
    }

    strcpy(str, result);
}