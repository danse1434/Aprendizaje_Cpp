#include <iostream>
#include <limits>



int main(int argc, char const *argv[])
{
    double a{2},b{3},c{1};

    std::cout << "--------------------------------------------------------------------------------" << std::endl;
    std::cout << "\tPrecedencia y asociatividad de operadores" << std::endl;
    std::cout << "--------------------------------------------------------------------------------" << std::endl;



    std::cout << "2*3/4" << std::endl;
    std::cout << "a*b/c" << a*b/c << std::endl;
    std::cout << "(a*b)/c" << (a*b)/c << std::endl;
    std::cout << "a*(b/c)" << a*(b/c) << std::endl;
    std::cout << "a*b%c" << a*b % c << std::endl;


     std::cin.clear();
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     std::cin.get();
     return EXIT_SUCCESS;
}