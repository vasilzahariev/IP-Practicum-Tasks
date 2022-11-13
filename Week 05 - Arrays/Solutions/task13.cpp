#include <iostream>
#include <cmath>

int main()
{
    int n;
    int arr[100];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for(int i = ceil((double)(n) / 2); i < ceil((double)(n)/2) + n/4; i++)
    {
        int idx = n - i + ceil((double)(n) / 2) - 1;
        std::swap(arr[i], arr[idx]);
    }
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
} 