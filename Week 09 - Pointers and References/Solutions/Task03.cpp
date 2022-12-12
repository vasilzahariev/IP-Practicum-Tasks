#include <iostream>

void printRow(int row[], int *lastElem)
{
    while(row != lastElem)
    {
        std::cout << *row << " ";
        row++;
    }
    std::cout << *lastElem << std::endl;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    printRow(arr, &arr[4]);
}