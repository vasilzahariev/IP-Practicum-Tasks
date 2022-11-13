#include <iostream>
#include <climits>

int main()
{
    int n;
    int arr[200];
    int pal[400];
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    int minL = INT_MAX;
    int minidx = n - 1;
    for(int i = n - 1; i >= n / 2; i--)
    {
        int j = 1;
        while(i - j >= 0 && i - j < n)
        {
            if(arr[i-j] == arr[i+j])
            {
                j++;
            }
            else
            {
                break;
            }
        }
        if(minL > n / 2 - j)
        {
            minL = n / 2 - j;
            minidx = i;
        }
    }
    int in = 0;
    for(int i = 0; i < minidx; i++)
    {
        pal[in++] = arr[i];
    }
    pal[in++] = arr[minidx];
    for(int i = minidx-1; i >= 0; i--)
    {
        pal[in++] = arr[i];
    }

    for(int i = 0; i < in; i++)
    {
        std::cout << pal[i]<<" ";
    }
    std::cout << std::endl;
}