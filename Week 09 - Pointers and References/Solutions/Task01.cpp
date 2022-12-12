#include <iostream>

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int a, b;
    std::cin >> a >> b;
    swap(a, b);
    std::cout << a << b << std::endl;
}