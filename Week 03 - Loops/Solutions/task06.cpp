#include <iostream>

int main() {
    unsigned count;

    std::cin >> count;

    double min = 0;
    double max = 0;
    double average = 0;

    for (unsigned counter = 1; counter <= count; ++counter) {
        double number;

        std::cin >> number;
        
        average += number;

        if (counter == 1) {
            min = number;
            max = number;

            continue;
        }

        min = min > number ? number : min;
        max = max < number ? number : max;
    }

    average /= count;

    std::cout << "Min = " << min << std::endl;
    std::cout << "Max = " << max << std::endl;
    std::cout.precision(2);
    std::cout << std::fixed << "Average = " << average << std::endl;

    return 0;
}
