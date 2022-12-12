#include <iostream>

int* medium(int arr[], int *lastElem)
{
    return arr + (lastElem - arr) / 2;
}
int main()
{
    int arr[] = {1,2,3,4};
    int arr2[] = {1,2,3,4,5,6,7};
    std::cout << *medium(arr, &arr[3]) << std::endl;
    std::cout << *medium(arr2, &arr2[6]) << std::endl;
}