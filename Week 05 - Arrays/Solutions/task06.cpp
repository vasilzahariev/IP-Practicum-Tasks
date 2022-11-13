#include <iostream>

int main()
{
    int n;
    int arr[100];
    int num;
    int hasInto[2000];
    for(int i = 0; i < 2000; i++)
    {
        hasInto[i] = -1;
    }
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        hasInto[arr[i]] = i;
    }
    std::cin >> num;

    for(int i = 0; i < n; i++)
    {
        if(hasInto[num - arr[i]] > i)
        {
            std::cout << "(" << arr[i] << " " << num - arr[i] <<") ";
        }
    }
    std::cout << std::endl;

    

}