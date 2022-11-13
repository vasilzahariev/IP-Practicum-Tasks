#include <iostream>
#include <cstring>

int main() {
    constexpr std::size_t STR_CAPACITY = 1024;

    char source[STR_CAPACITY];
    char destination[STR_CAPACITY];

    std::cin >> source >> destination;

    strcpy(destination, source);

    std::cout << "First String: " << source << std::endl;
    std::cout << "Second String: " << destination << std::endl;
    
    return 0;
}
