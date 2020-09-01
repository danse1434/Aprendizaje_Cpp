#include <iostream>
#include <limits>

void valorincremental(){
    int valor{1};
    ++valor;
    ++valor;
    std::cout << valor << '\n';
}

void valorincrementalEstatica(){
    using namespace std;
    static int valorq{1};
    ++valorq;
    ++valorq;
    cout << valorq << '\n';
}

int main(int argc, char const *argv[])
{
    std::cout << "-----------------------------------------------------\n";
    std::cout << "\tVariable Local" << std::endl;
    std::cout << "-----------------------------------------------------\n";
    valorincremental();
    valorincremental();
    valorincremental();
    valorincremental();
    valorincremental();
    std::cout << "-----------------------------------------------------\n";
    std::cout << "\tVariable Estatica" << std::endl;
    std::cout << "-----------------------------------------------------\n";
    valorincrementalEstatica();
    valorincrementalEstatica();
    valorincrementalEstatica();
    valorincrementalEstatica();
    valorincrementalEstatica();
    std::cout << "Muy interesante y todo, pero mejor no usar estas variables locales estaticas asi como las variables globales";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}
