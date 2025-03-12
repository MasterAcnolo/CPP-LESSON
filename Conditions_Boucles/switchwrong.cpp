#include <iostream>
int main()
{
    int value { 33 };
    switch (value)
    {
        case 12:
            std::cout << "value est egale à 12" << std::endl;
        case 33:
            std::cout << "value est egale à 33" << std::endl;
        default:
            std::cout << "value est différent de 12 ou 33" << std::endl;
    }

    return 0;
}