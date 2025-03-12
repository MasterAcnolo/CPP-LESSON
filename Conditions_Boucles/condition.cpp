#include <iostream>
int main()
{
    float price { 114.2f };

    if ( price >= 100.f )
    {
        // appliquer une réduction si l'on dépasse un certain prix
        price *= 0.9f;
    }

    std::cout << "Le prix final est de " << price << "€" << std::endl;

    return 0;
}