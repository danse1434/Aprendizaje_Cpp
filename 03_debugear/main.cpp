#include <iostream>
#include <limits>

int main(int argc, char const *argv[])
{
    std::cout << "Hola Mundo";

    int a;
    float b;
    
    std::cout << b ;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
