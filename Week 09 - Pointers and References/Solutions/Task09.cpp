#include <iostream>

int fpow(int osn, int sp)
{
    if(sp == 0)return 1;
    if(sp == 1) return osn;
    if(sp % 2 == 0 ) return fpow(osn * osn, sp/2);
    else return osn * fpow(osn * osn, sp/2);
}
int findVal(char* ptr)
{
    int res = 0;
    for(int i = 0; i < 4; i++)
    {
        res += (int)*(ptr + i) * fpow(2, 8 * i);
    }
    return res;
}
int main()
{
    int a = 10;
    char *addr = (char*) &a;
    std::cout << findVal(addr) << std::endl;

}
