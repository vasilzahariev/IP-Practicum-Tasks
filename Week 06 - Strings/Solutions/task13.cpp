#include <iostream>
#include <cstring>

bool areBracketsCorrect(char exp[]);

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char exp[STR_CAPACITY];

    std::cin >> exp;

    std::cout << std::boolalpha << areBracketsCorrect(exp) << std::endl;
    
    return 0;
}

bool areBracketsCorrect(char exp[]) {
    int bracketsCounter = 0;

    for (std::size_t index = 0; index < strlen(exp); ++index) {
        if (exp[index] == '(') {
            ++bracketsCounter;
        } else if (exp[index] == ')') {
            --bracketsCounter;
        }
    }

    return (bracketsCounter == 0);
}
