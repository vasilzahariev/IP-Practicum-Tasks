#include <iostream>

bool isKSuffixOfN(unsigned n, unsigned k);
bool isKInsideN(unsigned n, unsigned k);

int main() {
    unsigned n;
    unsigned k;

    std::cin >> n >> k;

    std::cout << (isKInsideN(n, k) ? "True" : "False") << std::endl;

    return 0;
}

bool isKSuffixOfN(unsigned n, unsigned k) {
    while (n != 0 && k != 0) {
        const unsigned N_DIGIT = n % 10;
        const unsigned K_DIGIT = k % 10;

        if (N_DIGIT != K_DIGIT) {
            return false;
        }

        n /= 10;
        k /= 10;
    }
    
    return (n != 0);
}

bool isKInsideN(unsigned n, unsigned k) {
    const unsigned LAST_K_DIGIT = k % 10;
    bool isFirstDigit = true;
    
    while (n != 0) {
        unsigned digit = n % 10;

        if (!isFirstDigit &&
            LAST_K_DIGIT == digit &&
            isKSuffixOfN(n, k)) {
            return true;
        }

        n /= 10;
        isFirstDigit = false;
    }

    return false;
}
