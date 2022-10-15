#include <iostream>
#include <cmath>

int main() {
    double a = .0;
    double b = .0;
    double c = .0;

    std::cin >> a >> b >> c;

    const double D = std::pow(b, 2) - (4 * a * c);

    if (D < 0) {
        std::cout << "no roots" << std::endl;
    } else if (D == 0) {
        const double X1 = (-b) / (2 * a);

        std::cout << X1 << std::endl;
    } else {
        const double SQRT_D = std::sqrt(D);

        const double X1 = (-b + SQRT_D) / (2 * a);
        const double X2 = (-b - SQRT_D) / (2 * a);

        std::cout << X1 << ' ' << X2 << std::endl;
    }

    return 0;
}
