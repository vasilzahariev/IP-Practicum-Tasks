#include <iostream>

int main()
{
    int n;
    int arr[100];
    bool used[2000];
    bool repeated[2000];
    
    for(int i = 0; i < 2000; i++)
    {
        used[i] = false;
        repeated[i] = false;
    }
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        if(used[arr[i]])
        {
            repeated[arr[i]] = true;
        }
        used[arr[i]] = true;
    }
    for(int i = 0; i < n; i++)
    {
        if(!repeated[arr[i]])
        {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}