#include "foo.h"
#include "goo.h"
#include <iostream>
#include <limits>



int main(int argc, char const *argv[])
{
    int x{3}, y{4};
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Espacios de nombre definidos por el usuario" << std::endl;
    std::cout << "-------------------------------------------------------\n";

    int fooVar, gooVar;
    fooVar = foo::hacerAlgo(x, y);
    gooVar = goo::hacerAlgo(x, y);
    
    std::cout << "Nombre de espacio \"foo\" " << fooVar << std::endl;
    std::cout << "Nombre de espacio \"goo\" " << gooVar << std::endl;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}