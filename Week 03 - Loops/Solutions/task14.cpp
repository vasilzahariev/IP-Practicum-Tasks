#include <iostream>

int main() {
    unsigned n;

    std::cin >> n;

    unsigned prev = 1;
    unsigned current = 1;

    for (unsigned i = 3; i <= n; ++i) {
        const unsigned NEXT = prev + current;

        prev = current;
        current = NEXT;
    }

    std::cout << current << std::endl;

    return 0;
}
