#include <iostream>
#include <cstring>

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char input[STR_CAPACITY];

    std::cin.getline(input, STR_CAPACITY);

    const std::size_t SIZE = strlen(input);

    char longestWord[STR_CAPACITY];
    char word[STR_CAPACITY];
    std::size_t wordIndex = 0;

    for (std::size_t index = 0; index < SIZE; ++index) {
        if (!isalpha(input[index])) {
            if (strlen(word) > strlen(longestWord)) {
                strcpy(longestWord, word);
            }

            memset(word, 0, strlen(word));
            wordIndex = 0;

            continue;
        }
        
        word[wordIndex++] = input[index];
    }
    
    if (strlen(word) > strlen(longestWord)) {
        strcpy(longestWord, word);
    }

    std::cout << longestWord << std::endl;
    
    return 0;
}