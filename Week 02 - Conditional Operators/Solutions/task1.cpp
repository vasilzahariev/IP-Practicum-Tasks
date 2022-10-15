#include <iostream>

int main() {
    int age = 0;

    std::cin >> age;

    if (age < 18) {
        std::cout << "Sad Misho" << std::endl;
    } else {
        std::cout << "Happy Misho" << std::endl;
    }

    return 0;
}
