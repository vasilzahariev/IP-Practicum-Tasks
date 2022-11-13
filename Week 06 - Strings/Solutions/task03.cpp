#include <iostream>
#include <cstring>

void changeStrCases(char str[]);

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char str[STR_CAPACITY];

    std::cin >> str;

    changeStrCases(str);

    std::cout << str << std::endl;
    
    return 0;
}

void changeStrCases(char str[]) {
    const std::size_t SIZE = strlen(str);

    for (std::size_t index = 0; index < strlen(str); ++index) {
        str[index] = (isalpha(str[index]) ? (isupper(str[index]) ? tolower(str[index]) : toupper(str[index])) : str[index]);
    }
}