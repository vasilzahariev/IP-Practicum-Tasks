#include <iostream>
#include <cctype>

int main() {
    for (char lowerLetter = 'a'; lowerLetter <= 'z'; ++lowerLetter) {
        const char UPPER_LETTER = std::toupper(lowerLetter);

        std::cout << lowerLetter << ' ' << UPPER_LETTER << std::endl;
    }

    return 0;
}
