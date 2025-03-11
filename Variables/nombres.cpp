#include <iostream>

int main()
{
    std::cout << -1 << std::endl; //int
    std::cout << 0 << std::endl; //int
    std::cout << 42 << std::endl; //int
    std::cout << 3.141593 << std::endl; //float
    std::cout << -1.5 << std::endl; //float


    std::cout << "Opérateurs arithmétiques :" << std::endl;
    std::cout << "Addition: 1 + 2 = " << 1 + 2 << std::endl;
    std::cout << "Soustraction: 6 - 2 = " << 6 - 2 << std::endl;
    std::cout << "Multiplication: 3.14 * 2 = " << 3.14 * 2 << std::endl;
    std::cout << "Division: 42.5 / 3.2 = " << 42.5 / 3.2 << std::endl;
    std::cout << "Modulo: 7 % 3 = " << 7 % 3 << std::endl;



    std::cout << "5 / 2 = " << 5 / 2 << std::endl; //A 
    std::cout << "5. / 2 = " << 5. / 2 << std::endl; //B

    // Remarque pour ce cas précis. L'OUTPUT n'est pas le même parce que sur A on a deux INT, et sur B on a Un Float. Si il y au moins un nombre float, l'output sera float
    






    return 0;
}