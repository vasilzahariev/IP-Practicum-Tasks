#include <iostream>

void PrintRow(int n, char c);
void PrintFigure(int n);

int main() {
    int n;

    std::cin >> n;

    PrintFigure(n);

    return 0;
}

void PrintRow(int n, char c) {
    if (n == 0) {
        std::cout << std::endl;
        return;
    }

    std::cout << c;
    PrintRow(n - 1, c);
}

void PrintFigure(int n) {
    if (n == 0) {
        return;
    }

    PrintRow(n, '*');

    PrintFigure(n - 1);

    PrintRow(n, '#');
}
