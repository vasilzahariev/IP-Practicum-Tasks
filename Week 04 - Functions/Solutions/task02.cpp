#include <iostream>

char sign(int number);

int main() {
    int number;
    
    std::cin >> number;

    std::cout << sign(number) << std::endl;

    return 0;
}

char sign(int number) {
    return (number > 0 ? '+' : (number == 0 ? '0' : '-'));
}
