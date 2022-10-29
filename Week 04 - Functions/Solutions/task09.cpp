#include <iostream>

unsigned long long permutation(unsigned n);
unsigned long long variation(unsigned n, unsigned k);
unsigned long long combination(unsigned n, unsigned k);

int main() {
    char cmd;
    unsigned n;
    unsigned k;
    
    do {
        std::cin >> cmd;

        switch (cmd) {
        case 'E':
            break;
        case 'P':
            std::cin >> n;

            std::cout << "P(n) = " << permutation(n) << std::endl;

            break;

        case 'V':
            std::cin >> n >> k;

            if (n < k) {
                std::cout << "Invalid (n, k) input!" << std::endl;
                break;
            }

            std::cout << "V(n, k) = " << variation(n, k) << std::endl;

            break;

        case 'C':
            std::cin >> n >> k;

            if (n < k) {
                std::cout << "Invalid (n, k) input!" << std::endl;
                break;
            }

            std::cout << "C(n, k) = " << combination(n, k) << std::endl;

            break;
        default:
            std::cout << "Invalid command input!" << std::endl;
            break;
        }
    } while (cmd != 'E');

    return 0;
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
