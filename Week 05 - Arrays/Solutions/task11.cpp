#include <iostream>

int main()
{
    int n;
    int arr[100], num;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::cin >> num;
    bool found = false;
    int l = 0, r = n - 1;
    while(l < r - 1 && ! found)
    {
        int m = (l + r) / 2;
        if(arr[m] == num)
        {
            found = true;
        }
        else if(arr[m] > num)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    found = found || (num == arr[l] || num == arr[l]);
    std::cout << std::boolalpha << found << std::endl;
}