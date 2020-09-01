#include "empleados.h"
#include <iostream>
#include <limits>
#include <string>

/* Se define en el header
struct Empleado
{
    std::string nombre;
    std::string id;
    int edad;
    double salario;
}; */

void mostrarAtributos(Empleado tipo);

int main(int argc, char const *argv[])
{
    std::cout << "---------------------------------------------------------------\n";
    std::cout << "\n Estructuras" << std::endl;
    std::cout << "---------------------------------------------------------------\n";

    Empleado Daniel;
    Daniel.nombre = "Daniel Parra";
    Daniel.edad = 28;
    Daniel.id = "1.049.629.987";
    Daniel.salario = 3000000;

    Empleado Mavel;
    Mavel.nombre = "Mavel Machacado";
    Mavel.edad = 31;
    Mavel.id = "1.032.382.541";
    Mavel.salario = 2800000;

    Empleado Noel{"Noel Parra", "67561567", 64, 8000000};

    std::cout << "\n";
    mostrarAtributos(Daniel);
    std::cout << "\n";
    mostrarAtributos(Mavel);
    std::cout << "\n";
    mostrarAtributos(Noel);
    std::cout << "\n";
    mostrarAtributos(Laura);
    std::cout << "\n\n";


    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return EXIT_SUCCESS;
}

void mostrarAtributos(Empleado tipo){
    using namespace std;
    cout << tipo.nombre << " tiene " << tipo.edad << " anos, su ID es " << tipo.id << " su salario es "; 
    cout << tipo.salario << " pesos" << endl;
}
