#include <iostream>
#include <cmath>

int main() {
    double x;
    double y;

    std::cin >> x >> y;

    double distanceToCenter = std::sqrt(std::pow(x, 2) + std::pow(y, 2));

    std::cout << "Distance from user point to center(0, 0) = " << distanceToCenter << std::endl;

    return 0;
}
