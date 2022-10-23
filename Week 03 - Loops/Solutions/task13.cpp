#include <iostream>

int main() {
    unsigned number;

    std::cin >> number;

    unsigned factoriel = 1;

    while (number != 1) {
        factoriel *= number--;
    }
    
    std::cout << factoriel << std::endl;

    return 0;
}
