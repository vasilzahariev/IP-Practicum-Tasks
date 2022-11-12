#include <iostream>

void read(char arr[], std::size_t size);
void rotate(char arr[], std::size_t size);
int find(char arr[], char searched[], std::size_t size, std::size_t searchedSize);
void print(char arr[], std::size_t size);
void print(size_t arr[], std::size_t size);

int main()
{
    constexpr std::size_t STR_CAPACITY = 1024;

    char firstArr[STR_CAPACITY];
    std::size_t size1;

    std::cin >> size1;

    read(firstArr, size1);

    char secondArr[STR_CAPACITY];
    std::size_t size2;

    std::cin >> size2;

    read(secondArr, size2);

    std::size_t rotation = 0;
    int foundPos = find(firstArr, secondArr, size1, size2);

    while (foundPos == -1 && rotation < size2)
    {
        rotate(secondArr, size2);
        foundPos = find(firstArr, secondArr, size1, size2);
        ++rotation;
    }

    if (rotation == size2)
    {
        size_t counter = 0, i = 0, j = 0, k = 0;
        size_t deleted[STR_CAPACITY];

        while (counter < size2 && j != size2)
        {
            i = 0;
            j = 0;
            k = 0;
            rotate(secondArr, size2);
            while (i < size1-size2 && j != size2)
            {
                if (firstArr[i] == secondArr[j])
                {
                    j++;
                }
                else
                {
                    deleted[k++] = i;
                }
                i++;
            }
            counter++;
        }

        if (j == size2)
        {
            for (size_t l = size2+k; l < size1; l++)
            {
                deleted[k++] = l; 
            }
            
            std::cout << "Rotation \"";
            print(secondArr, size2);
            std::cout << "\" found after deleting characters: ";
            print(deleted, k);
            std::cout<<'\n';
        }
        else {
            std::cout<<"No rotation found\n";
        }
    }
    else
    {
        std::cout << "Rotation \"";
        print(secondArr, size2);
        std::cout << "\" found after deleting " << foundPos << " characters from the start and " << (size1 - (size2 + foundPos)) << " characters from the end" << std::endl;
    }

    return 0;
}

void read(char arr[], std::size_t size)
{
    for (std::size_t index = 0; index < size; ++index)
    {
        std::cin >> arr[index];
    }
}

void rotate(char arr[], std::size_t size)
{
    for (std::size_t index = size - 1; index > 0; --index)
    {
        char temp = arr[index];

        arr[index] = arr[index - 1];
        arr[index - 1] = temp;
    }
}

int find(char arr[], char arr2[], std::size_t size1, std::size_t size2)
{
    for (std::size_t index = 0; index <= (size1 - size2); ++index)
    {
        if (arr[index] == arr2[0])
        {
            std::size_t index2 = 0;

            while (index2 < size2 &&
                   arr[index + index2] == arr2[index2])
            {
                ++index2;
            }

            if (index2 == size2)
            {
                return index;
            }
        }
    }

    return -1;
}

void print(char arr[], std::size_t size)
{
    for (std::size_t index = 0; index < size; ++index)
    {
        std::cout << arr[index];
    }
}

void print(size_t arr[], std::size_t size)
{
    for (std::size_t index = 0; index < size; ++index)
    {
        std::cout << arr[index] << ' ';
    }
}