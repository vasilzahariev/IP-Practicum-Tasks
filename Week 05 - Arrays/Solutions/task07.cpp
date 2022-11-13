#include <iostream>

int main()
{
    int n;
    int arr[100];
    int prefixArr[100];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    prefixArr[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        prefixArr[i] = prefixArr[i + 1] + arr[i];
    }
    bool used[20000];
    for (int i = 0; i < 20000; i++)
    {
        used[i] = false;
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        flag = flag || prefixArr[i] == 0;
        flag = flag || used[prefixArr[i]] == true;
        used[prefixArr[i]] = true;
    }
    
    std::cout << std::boolalpha << flag << std::endl;
}