#include <iostream>
#include <cstring>

const char vowels[] = {'a', 'e', 'o', 'i', 'u'};
bool isVowel(char a)
{
    bool flag = false;
    for(int i = 0; i < 5; i++)
    {
        if(vowels[i] == a)
        {
            flag = true;
        }
    }
    return flag;
}
int countVowels(char str[], char* lastElem)
{
    int result = 0;
    while(str != lastElem)
    {
        if(isVowel(*str))
        {
            result++;
        }
        str++;   
    }
    if(isVowel(*lastElem)) 
    {
        result++;
    }
    return result;
}
int main()
{
    char str[255];
    std::cin >> str;
    int vowels = countVowels(str, str + strlen(str));
    std::cout << "Glasni: " << vowels << std::endl;
    std::cout << "Suglasni: " << strlen(str) - vowels << std::endl; 

}