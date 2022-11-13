#include <iostream>

int main()
{
    int n;
    int arr[100];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                std::swap(arr[i], arr[j]);
            }
        }
    }
    
    double median;
    bool moreThanOne = false;
    if(n % 2 == 0)
    {
        median = (arr[n / 2 - 1] + arr[n / 2]);
        median /= 2;
    }
    else
    {
        median = arr[n / 2];
    }
    int start = 0, length = 0, modeStart = 0, modeLength = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == arr[start])
        {
            length++;
        }
        else
        {
            if(length > modeLength)
            {
                modeLength = length;
                modeStart = start;
                moreThanOne = false;
            }
            else if(length == modeLength)
            {
                moreThanOne = true;
            }
            start = i;
            length = 1;
        }
    }
    if(length > modeLength)
    {
        modeLength = length;
        modeStart = start;
        moreThanOne = false;
    }
    else if(length == modeLength)
    {
        moreThanOne = true;
    }
    std::cout << "Median: " << median << std::endl;
    std::cout << "Mode: ";
    if(moreThanOne) 
    {
        std::cout << "More than one";
    }
    else
    {
        std::cout << arr[modeStart];
    }
    std::cout << std::endl;
}