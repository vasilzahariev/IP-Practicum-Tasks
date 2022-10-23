#include <iostream>

int main() {
    double x;
    double y;

    std::cin >> x >> y;

    if (x == 0 && y == 0) {
        std::cout << "Center" << std::endl;
    }
    else if (x == 0) {
        std::cout << "Y-Axis" << std::endl;
    }
    else if (y == 0) {
        std::cout << "X-Axis" << std::endl;
    }
    else if (x > 0 && y > 0) {
        std::cout << "I" << std::endl;
    }
    else if (x < 0 && y > 0) {
        std::cout << "II" << std::endl;
    }
    else if (x < 0 && y < 0) {
        std::cout << "III" << std::endl;
    }
    else if (x > 0 && y < 0) {
        std::cout << "IV" << std::endl;
    }

    return 0;
}
