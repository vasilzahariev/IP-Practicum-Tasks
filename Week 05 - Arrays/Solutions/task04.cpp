#include <iostream>

int main()
{
    int n;
    int arr[100];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int longestStart = -1;
    int longestSize = 0;
    int currentStart = 0;
    int currentSize = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[currentStart])
        {
            currentSize++;
        }
        else
        {
            if(currentSize >= longestSize)
            {
                longestSize = currentSize;
                longestStart = currentStart;
            }
            currentStart = i;
            currentSize = 1;
        }
    }
    if(currentSize >= longestSize)
    {
        longestSize = currentSize;
        longestStart = currentStart;
    }
    for(int i = longestStart; i < longestStart + longestSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}