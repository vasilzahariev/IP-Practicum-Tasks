#include <iostream>
#include <climits>

int main()
{
    int n;
    int arr[100];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    
    if(n < 2)
    {
        std::cout << "Array has less than 2 elements! \n";
    }
    else
    {
        int max = INT_MIN;
        int secondmax = INT_MIN;
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            if(max < arr[i])
            {
                max = arr[i];
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(max != arr[i] && secondmax < arr[i])
            {
                secondmax = arr[i];
                flag = true;
            }
        }
        if(!flag)
        {
            std::cout << "All elements are equal!\n";
        }
        else
        {
            std::cout << secondmax << std::endl;
        }
    }

}