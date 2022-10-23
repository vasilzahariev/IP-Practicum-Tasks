#include <iostream>

int main() {
    double firstVecX;
    double firstVecY;
    double secondVecX;
    double secondVecY;

    std::cin >> firstVecX >> firstVecY;
    std::cin >> secondVecX >> secondVecY;
    
    if ((firstVecX * secondVecY) - (firstVecY * secondVecX) == 0) {
        std::cout << "They are collinear" << std::endl;
    } else {
        std::cout << "They are not collinear" << std::endl;
    }

    return 0;
}
