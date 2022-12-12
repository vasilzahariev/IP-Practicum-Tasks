#include <iostream>

void plus(int x, int y, int &z)
{
    z = x + y;
}
int main()
{
    int x, y, z;
    std::cin >> x >> y;
    plus(x, y, z);
    std::cout << z;
}