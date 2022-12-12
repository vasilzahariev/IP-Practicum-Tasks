#include <iostream>

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void sortPtrs(int arr[], int *lastElem)
{
    lastElem++;
    for(int *i = arr; i != lastElem; i++)
    {
        for(int *j = arr; j != i; j++)
        {
            if(*j > *i)
            {
                swap(*i, *j);
            }
        }
    }
}
int main()
{
    int arr[10];
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    sortPtrs(arr, arr+n);
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}