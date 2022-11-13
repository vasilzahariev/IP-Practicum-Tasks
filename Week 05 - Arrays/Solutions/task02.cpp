#include <iostream>


int main()
{
    int size1, size2;
    int arr1[100], arr2[100];
    std::cin >> size1;
    for(int i = 0; i < size1; i++)
    {
        std::cin >> arr1[i];
    }

    std::cin >> size2;
    for(int i = 0; i < size2; i++)
    {
        std::cin >> arr2[i];
    }

    bool flag = true;
    flag = flag && size1 == size2;

    for(int i = 0; flag && i < size1; i++)
    {
        flag = flag && arr1[i] == arr2[i];
    }

    std::cout << std::boolalpha << flag << std::endl;

}