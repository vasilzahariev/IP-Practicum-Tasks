#include <iostream>
#include <cstring>

bool find(char str[], char searched[]);

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char str[STR_CAPACITY];

    std::cin.getline(str, STR_CAPACITY);

    char searched[STR_CAPACITY];

    std::cin.getline(searched, STR_CAPACITY);

    std::cout << std::boolalpha << find(str, searched) << std::endl;
    
    return 0;
}

bool find(char str[], char searched[]) {
    const std::size_t STR_SIZE = strlen(str);
    const std::size_t SEARCHED_SIZE = strlen(searched);
    
    std::size_t index = 0;
    
    while (index <= (STR_SIZE - SEARCHED_SIZE)) {
        if (tolower(str[index]) == tolower(searched[0])) {
            std::size_t sIndex = 1;
            
            while (sIndex < SEARCHED_SIZE &&
                   tolower(str[index + sIndex]) == tolower(searched[sIndex])) {
                ++sIndex;
            }

            if (sIndex == SEARCHED_SIZE) {
                return true;
            }
        }

        ++index;
    }
    
    return false;
}
