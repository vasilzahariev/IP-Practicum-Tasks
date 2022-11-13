#include <iostream>

int main()
{
    int n1,n2;
    int arr1[100], arr2[100];
    int resultArr[200], idx1 = 0, idx2 = 0;
    std::cin >> n1;
    for(int i = 0; i < n1; i++)
    {
        std::cin >> arr1[i];
    }
    std::cin >> n2;
    for(int i = 0; i < n2; i++)
    {
        std::cin >> arr2[i];
    }

    int i = 0;
    while(idx1 < n1 && idx2 < n2)
    {
        if(arr1[idx1] < arr2[idx2])
        {
            resultArr[i] = arr1[idx1];
            idx1++;
        }
        else
        {
            resultArr[i] = arr2[idx2];
            idx2++;

        }
        i++;
    }
    while(idx1 < n1)
    {
        resultArr[i] = arr1[idx1];
        i++;
        idx1++;
    }
    while(idx2 < n2)
    {
        resultArr[i] = arr2[idx2];
        i++;
        idx2++;
    }
    for(int c = 0; c < i; c++)
    {
        std::cout << resultArr[c] << " ";
    }
    std::cout << std::endl;
}