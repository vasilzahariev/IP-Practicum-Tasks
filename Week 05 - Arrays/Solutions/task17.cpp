#include <iostream>

int main()
{
    int n;
    int arr[100];
    int rot;
    
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::cin >> rot;

    if(rot > 0)
    {
        for(int r = 0; r < rot; r++)
        {
            for(int i = n-1; i > 0; i--)
            {
                std::swap(arr[i-1], arr[i]);
            }
        }
    }
    else
    {
        rot = abs(rot);
        for(int r = 0; r < rot; r++)
        {
            for(int i = 1; i < n; i++)
            {
                std::swap(arr[i-1], arr[i]);
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}