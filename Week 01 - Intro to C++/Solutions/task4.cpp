#include <iostream>

int main() {
    unsigned letterIndex = 0;

    std::cin >> letterIndex;

    char upperLetter = 'A' + (letterIndex - 1);
    char lowerLetter = 'a' + (letterIndex - 1);

    std::cout << upperLetter << ' ' << lowerLetter << std::endl;

    return 0;
}
