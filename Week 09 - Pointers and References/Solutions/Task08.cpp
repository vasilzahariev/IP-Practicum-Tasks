#include <iostream>

int findWinner(int arr[], int *lastElem, int *curElem)
{
    int *mid = arr + (lastElem - arr) / 2;
    if(curElem - mid == 0)
    {
        return 0;
    }
    else if(curElem - mid > 0)
    {
        return 1;
    } 
    else
    {
        return -1;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    switch (findWinner(arr, arr+9, arr+3))
    {
        case(-1): 
        {
            std::cout << "Ani";
            break;
        }
        case(0):
        {
            std::cout << "Draw";
            break;
        }
        case(1):
        {
            std::cout << "Misho";
            break;
        }  
    
  
    }
    std::cout << std::endl;
}