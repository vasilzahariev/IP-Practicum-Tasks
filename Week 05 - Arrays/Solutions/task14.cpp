#include <iostream>

int square(int a)
{
    return a * a;
}
int main()
{
    int routersC;
    int routerX[100], routerY[100], routerR[100];
    int pointsC;
    int pointX[100], pointY[100];
    std::cin >> routersC;
    for(int i = 0; i < routersC; i++)
    {
        std::cin >> routerX[i] >> routerY[i] >> routerR[i];
    }
    std::cin >> pointsC;
    for(int i = 0; i < pointsC; i++)
    {
        std::cin >> pointX[i] >> pointY[i];
    }

    bool flag = true;
    for(int i = 0; i < pointsC; i++)
    {
        bool found = false;
        for(int j = 0; j < routersC && !found; j++)
        {
            if(square(pointX[i] - routerX[i]) + square(pointY[i] - routerY[i]) <= square(routerR[i]))
            {
                found = true;
            }
        }
        flag = flag && found;
    }
    if(flag)
    {
        std::cout << "Happy Misho";
    }
    else
    {
        std::cout << "Sad Misho";
    }
    std::cout << std::endl;

}