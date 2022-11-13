#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    bool flag = true;
    for(int i = 0; i < n / 2; i++)
    {
        flag = flag && arr[i] == arr[n - 1 - i];
    }
    std::cout << std::boolalpha << flag << std::endl;
}