#include <iostream>

bool checkIfNKAreCorrect(unsigned n, unsigned k);

unsigned long long permutation(unsigned n);
unsigned long long variation(unsigned n, unsigned k);
unsigned long long combination(unsigned n, unsigned k);

void executeCommand(char cmd, unsigned n, unsigned k);

int main() {
    char cmd;
    
    do {
        std::cin >> cmd;
        
        if (cmd == 'P' || cmd == 'V' || cmd == 'C') {
            unsigned n = 0;
            unsigned k = 0;

            std::cin >> n;

            if (cmd == 'V' || cmd == 'C') {
                std::cin >> k;
            }

            executeCommand(cmd, n, k);
        } else if (cmd != 'E') {
            std::cout << "Invalid command input!" << std::endl;
        }

    } while (cmd != 'E');

    return 0;
}

bool checkIfNKAreCorrect(unsigned n, unsigned k) {
    if (n < k) {
        std::cout << "Invalid (n, k) input!" << std::endl;

        return false;
    }

    return true;
}

unsigned long long permutation(unsigned n) {
    unsigned long long result = 1;

    for (unsigned number = 2; number <= n; ++number) {
        result *= number;
    }

    return result;
}

unsigned long long variation(unsigned n, unsigned k) {
    unsigned long long result = 1;
    
    for (unsigned number = n; number > (n - k); --number) {
        result *= number;
    }

    return result;
}

unsigned long long combination(unsigned n, unsigned k) {
    return variation(n, k) / permutation(k);
}

void executeCommand(char cmd, unsigned n, unsigned k) {
    if (cmd != 'P' && !checkIfNKAreCorrect(n, k)) {
        return;
    }

    unsigned long long result = (cmd == 'P' ? permutation(n) : (cmd == 'V' ? variation(n, k) : combination(n, k)));

    std::cout << cmd << "(n" << (cmd == 'P' ? ")" : ", k)") << " = " << result << std::endl;
}
