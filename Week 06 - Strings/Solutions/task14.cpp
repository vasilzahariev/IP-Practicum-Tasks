#include <iostream>
#include <cstring>

void replace(char str[], char toReplace, char replacer);

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char str[STR_CAPACITY];

    std::cin >> str;

    char toReplace;

    std::cin.ignore();
    std::cin.get(toReplace);
    
    char replacer;
    
    std::cin.ignore();
    std::cin.get(replacer);

    replace(str, toReplace, replacer);

    std::cout << str << std::endl;

    return 0;
}

void replace(char str[], char toReplace, char replacer) {
    const std::size_t SIZE = strlen(str);
    
    for (std::size_t index = 0; index < SIZE; ++index) {
        if (str[index] == toReplace) {
            str[index] = replacer;
        }
    }
}
