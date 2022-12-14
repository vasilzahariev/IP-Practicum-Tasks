#include <iostream>
#include <iomanip>

void printWithALeadingZero(unsigned number);
void printNewHoursAndMinutes(unsigned hours, unsigned minutes, unsigned minutesToAdd);

int main() {
    unsigned hours;
    unsigned minutes;

    do {
        std::cin >> hours >> minutes;
    } while (!((hours >= 0 && hours < 24) &&
               (minutes >= 0 && minutes < 60)));

    unsigned minutesToAdd;

    std::cin >> minutesToAdd;

    printNewHoursAndMinutes(hours, minutes, minutesToAdd);

    return 0;
}

void printWithALeadingZero(unsigned number) {
    std::cout << std::setw(2) << std::setfill('0') << number;
}

void printNewHoursAndMinutes(unsigned hours, unsigned minutes, unsigned minutesToAdd) {
    minutes += minutesToAdd;
    hours += minutes / 60;

    minutes %= 60;
    hours %= 24;

    printWithALeadingZero(hours);
    std::cout << ':';
    printWithALeadingZero(minutes);
    std::cout << std::endl;
}
