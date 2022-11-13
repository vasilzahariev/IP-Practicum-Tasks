#include <iostream>
#include <cstring>

constexpr std::size_t STR_CAPACITY = 1024;

int findSumOfAllNumbers(char str[]);

int main() {

    char str[STR_CAPACITY];

    std::cin.getline(str, STR_CAPACITY);

    std::cout << findSumOfAllNumbers(str) << std::endl;
    
    return 0;
}

int findSumOfAllNumbers(char str[]) {
    const std::size_t SIZE = strlen(str);
    int sum = 0;

    char number[STR_CAPACITY] = { '\0', };
    std::size_t numberIndex = 0;

    for (std::size_t index = 0; index < SIZE; ++index) {
        if (isdigit(str[index]) || (str[index] == '-' && numberIndex == 0)) {
            number[numberIndex++] = str[index];
        } else if (strlen(number) != 0) {
            sum += std::atoi(number);

            memset(number, '\0', strlen(number));
            numberIndex = 0;
        }
    }

    if (strlen(number) != 0) {
        sum += std::atoi(number);

        memset(number, '\0', strlen(number));
        numberIndex = 0;
    }

    return sum;
}
