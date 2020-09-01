#include <math.h>
#define PI 3.14159265

// Funciones matemáticas simples
int add(int x, int y)
{
    return x + y;
}
// Funciones de cálculo de dimensiones
float superficie(float r){
    float surface;
    surface = 4 * PI * pow(r, 2);
    return surface;
}
float volumen(float r){
    float vol;
    vol = 4/3 * PI * pow(r, 3);
    return vol;
}
float perim(float r){
    float p = 8 * 3.14159265 * r;
    return p;
}