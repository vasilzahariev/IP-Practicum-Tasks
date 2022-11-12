#include <iostream>

bool isAdjecent(unsigned n) {
    unsigned prevDigit = n % 10;
    n /= 10;
    while (n != 0)
    {
        if(n % 10 == prevDigit) {
            return false;
        }
        prevDigit = n % 10;
        n /= 10;
    }
    return true;
}

int main() {
    unsigned a, b;
    std::cin>>a>>b;
    while (a != b && !isAdjecent(a))
    {
        ++a;
    }
    if(a==b &&!isAdjecent(a)) {
        std::cout<<"No adjecent numbers!\n";
    }
    else {
        while (a != b && !isAdjecent(b))
        {
            --b;
        }
        
        std::cout << b - a << '\n';
    }

    return 0;
}