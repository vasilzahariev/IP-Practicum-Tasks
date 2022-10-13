#include <iostream>
#include <cmath>

int main() {
    double x = 0;
    double y = 0;

    std::cin >> x >> y;

    double distanceToCenter = std::sqrt(std::pow(x, 2) + std::pow(y, 2));
    double radius;

    std::cin >> radius;

    bool isInsideCircle = distanceToCenter < radius; // Няма значение дали сте написали '<' или "<="

    std::cout << isInsideCircle << std::endl;

    return 0;
}
