#include <iostream>
#include <cstring>

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char str1[STR_CAPACITY];
    char str2[STR_CAPACITY];
    char str3[STR_CAPACITY];

    std::cin >> str1 >> str2 >> str3;

    char result[3 * STR_CAPACITY];

    strcpy(result, str1);
    strcat(result, str2);
    strcat(result, str3);

    std::cout << result << std::endl;
    
    return 0;
}