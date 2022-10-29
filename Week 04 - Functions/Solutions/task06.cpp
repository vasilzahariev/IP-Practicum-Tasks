#include <iostream>

bool isPrime(int number);
void printAllPrimeNumbersInInterval(int start, int end);

int main() {
    int start;
    int end;

    std::cin >> start >> end;

    printAllPrimeNumbersInInterval(start, end);

    return 0;
}

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    
    for (int factor = 2; factor < number; ++factor) {
        if (number % factor == 0) {
            return false;
        }
    }

    return true;
}

void printAllPrimeNumbersInInterval(int start, int end) {
    for (; start <= end; ++start) {
        if (isPrime(start)) {
            std::cout << start << ' ';
        }
    }
}
