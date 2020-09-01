#include <iostream>
#include <math.h>
#include "estimacionAltura.h"

double estimacionAltura(double y0, double t){
    double y;
    y = y0 - (constNumeros::gravedad * pow(t,2)/2);
    if (y < 0)
    {
        return 0;
    } else
    {
        return y;
    }
}

void estatusProyectil(double y0, double t){
    double y = estimacionAltura(y0, t);

    if (y!=0)
    {
        std::cout << "A los " << t << " segundos, la bola esta a una altura de: " << y << " metros \n";
    } else
    {
        std::cout << "A los " << t << " segundos, la bola esta en el suelo \n";
    }
}