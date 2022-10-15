#include <iostream>
#include <cmath>

int main() {
    double mishosMoney = 0;
    double whiskeyPrice = 0;
    double shishaPrice = 0;
    unsigned drinkersCount = 0;

    std::cin >> mishosMoney >> whiskeyPrice >> shishaPrice >> drinkersCount;

    int whiskeyPricePerDrinker = std::ceil(whiskeyPrice / drinkersCount);

    mishosMoney -= whiskeyPricePerDrinker;

    bool canMishoAffordHisShisha = mishosMoney >= shishaPrice;

    std::cout << std::boolalpha << canMishoAffordHisShisha << std::endl;

    return 0;
}
