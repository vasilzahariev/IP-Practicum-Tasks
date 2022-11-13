#include <iostream>

void bubbleSort(int arr[], int n)
{
    bool swapped = false;
    do
    {
        swapped = false;
        for(int i = 1; i < n; i++)
        {
            if(arr[i-1] > arr[i])
            {
                std::swap(arr[i-1], arr[i]);
                swapped = true;
            }
        }
    } 
    while (swapped);
}

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int locMin = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[locMin])
            {
                locMin = j;
            }
        }
        if(locMin != i)
        {
            std::swap(arr[i], arr[locMin]);
        }
    }
    
}

void insertionSort(int arr[], int n)
{
    int i = 1;
    while(i < n)
    {
        int tmp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > tmp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tmp;
        i++;
    }
}

int main()
{
    int n;
    int arr[100];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    insertionSort(arr, n);
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}