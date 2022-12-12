#include <iostream>

double averageRow(int row[], int *lastElem)
{
    double sum = 0; 
    int count = lastElem - row + 1;
    while(row != lastElem)
    {
        sum += *row;
        row++;
    }
    if(count != 1)
    {
        sum += *lastElem;
        return sum / count;
    }
    else
    {
        return *lastElem;
    }
}
int main()
{
    int avg[] = {1, 2, 3, 4, 5};
    std::cout << averageRow(avg, &avg[4]) << std::endl;
}