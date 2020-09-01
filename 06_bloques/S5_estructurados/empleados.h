#include <iostream>
#include <limits>
#include <string>

#if !defined(EMPLEADOS_H)
#define EMPLEADOS_H

struct Empleado
{
    std::string nombre;
    std::string id;
    int edad;
    double salario;
};

Empleado Laura {"Laura Parra", "1.321.212.312", 26, 16000000};

#endif // EMPLEADOS_H