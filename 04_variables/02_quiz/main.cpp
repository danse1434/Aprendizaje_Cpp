#include <iostream>
#include <limits>

double ingresarNumero();
char   ingresarOperador();

int main(int argc, char const *argv[])
{   
    double a{},b{},c{};
    char operador;

    a = ingresarNumero();
    b = ingresarNumero();
    operador = ingresarOperador();


    // std::cout << "El numero ingresado asignado en \"a\": " << a << std::endl;
    // std::cout << "El numero ingresado asignado en \"b\": " << b << std::endl;
    // std::cout << "El numero operador asignado en \"c\": " << operador << std::endl;

    switch (operador){
    case '+': c = (a + b);
        break;
    case '-': c = (a - b);
        break;
    case '*': c = (a * b);
        break;
    case '/':
        if (b != 0)
        {
            c = (a / b);
        } else
        {
            std::cout << "No se puede dividir por cero\n";
            return EXIT_FAILURE;
        };
        break;
    default: 
    std::cout << "No se reconoce el operador ingresado!\n";
    return EXIT_FAILURE;
        break;
    }
    std::cout << "-----------------------------------------------------\n\n\n";
    std::cout << a << " " << operador << " " << b << " es " << c << std::endl;


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}

double ingresarNumero(){
    std::cout << "Ingrese un valor de tipo double: "; 
    double x{};
    std::cin >> x;
    return x;
}

char ingresarOperador(){
    std::cout << "Ingrese el operador deseado: "; 
    char x;
    std::cin >> x;
    return x;
}