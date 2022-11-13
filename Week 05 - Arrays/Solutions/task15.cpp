#include <iostream>

double f(double x)
{
    return x*x*x;
}
double derivative(double x)
{
    double dx = 0.0001;
    return (f(x+dx) - f(x)) / dx;
}
int main()
{
    int a;
    std::cin >> a;
    std::cout << derivative(a) << std::endl;
}