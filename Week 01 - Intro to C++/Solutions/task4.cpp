#include <iostream>

int main() {
    unsigned letterIndex;

    std::cin >> letterIndex;

    char upperLetter = (char) (letterIndex + 64);
    char lowerLetter = (char) (letterIndex + 96);

    std::cout << upperLetter << ' ' << lowerLetter << std::endl;

    return 0;
}
