#include <iostream>
#include <cmath>

int main() {
    int number;

    std::cin >> number;

    int copyNumber = number;
    unsigned digitsCounter = 0;

    while (copyNumber != 0) {
        copyNumber /= 10;

        ++digitsCounter;
    }
    
    copyNumber = number;
    unsigned narcissisticValue = 0;

    while (copyNumber != 0) {
        const unsigned DIGIT = copyNumber % 10;

        narcissisticValue += std::pow(DIGIT, digitsCounter);

        copyNumber /= 10;
    }
    
    std::cout << std::boolalpha << (narcissisticValue == number) << std::endl;

    return 0;
}
