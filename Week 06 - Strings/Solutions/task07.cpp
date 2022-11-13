#include <iostream>
#include <cstring>

unsigned countVowels(char str[]);

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char str[STR_CAPACITY];

    std::cin >> str;

    std::cout << countVowels(str) << std::endl;
    
    return 0;
}

unsigned countVowels(char str[]) {
    const std::size_t SIZE = strlen(str);
    unsigned counter = 0;

    for (std::size_t index = 0; index < SIZE; ++index) {
        if (str[index] == 'a' ||
            str[index] == 'e' ||
            str[index] == 'i' ||
            str[index] == 'o' ||
            str[index] == 'u' ||
            str[index] == 'y') {
            ++counter;
        }
    }
    
    return counter;
}
