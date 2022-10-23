#include <iostream>

int main() {
    int start;
    int end;

    std::cin >> start >> end;

    int sum = 0;

    for (; start <= end; ++start) {
        sum += start;
    }

    std::cout << sum << std::endl;

    return 0;
}
