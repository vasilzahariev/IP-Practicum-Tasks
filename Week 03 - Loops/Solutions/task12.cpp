#include <iostream>

int main() {
    unsigned number;

    std::cin >> number;

    unsigned counter = 0;

    while (number % 10 == 0) {
        ++counter;

        number /= 10;
    }

    std::cout << counter << std::endl;    

    return 0;
}
