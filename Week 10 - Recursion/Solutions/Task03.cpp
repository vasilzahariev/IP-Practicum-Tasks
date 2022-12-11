#include <iostream>

int Fibonacci(int n);

int main() {
    int n;

    std::cin >> n;

    std::cout << Fibonacci(n) << std::endl;

    return 0;
}

int Fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
