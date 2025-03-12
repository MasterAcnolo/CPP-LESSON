#include <iostream>
int main()
{
    char letter { 'e' };
    switch(letter)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            std::cout << "You entered a vowel." << std::endl;
            break;
        default:
            std::cout << "You entered a consonant." << std::endl;
            break;
    }

    return 0;
}

// Ne Pas oublier d'écrire break; sinon cela pourra rendre les deux conditions et c'est pas ouf parfois