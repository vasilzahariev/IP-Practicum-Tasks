#include <iostream>
#include <cstring>

bool isTitleCase(char str[]);

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char str[STR_CAPACITY];

    std::cin.getline(str, STR_CAPACITY);

    if (isTitleCase(str)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
        std::cout << str << std::endl;
    }

    return 0;
}

bool isTitleCase(char str[]) {
    const std::size_t SIZE = strlen(str);
    
    bool titleCase = true;
    bool word = false;
    bool number = false;
    
    for (std::size_t index = 0; index < SIZE; ++index) {
        if (str[index] == ' ') {
            word = false;
            number = false;
        } else if (!word && isdigit(str[index])) {
            number = true;
        } else if (!word && !number && isalpha(str[index])) {
            if (islower(str[index])) {
                titleCase = false;

                str[index] = toupper(str[index]);
            }

            word = true;
        } else if (word && isalpha(str[index]) && isupper(str[index])) {
            titleCase = false;

            str[index] = tolower(str[index]);
        }
    }

    return titleCase;
}
