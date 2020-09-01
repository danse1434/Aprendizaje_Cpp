/* Procedimmiento de Generación Secuencia */

#include<iostream>
#include<conio.h>


using namespace std;

// Prototipo de funcion
void seq();

// Variables globales
    int N;                          // Tamaño de vector
    float li, ls;                 // Minimo y máximo
    float *vec;                     // Variable puntero

int main(){
    cout << "Creacion de secuencia" << endl;
    cout << "Tamano: \t";   cin >> N;
    cout << "Desde: \t";    cin >> li;
    cout << "Hasta: \t";    cin >> ls;

    // Creación de vector de secuencia
    seq();
    
    // Mostrar resultados
    for (int i = 0; i < N; i++)
    {
        cout << "N. " << i << ": " << vec[i] << endl;
    }

    // Liberar memoria
    delete[] vec;

    getch();
    return 0;    
}


void seq(){
    // Asignación de vector de manera dinámica
    vec = new float[N];         

    // Generación de secuencia
    for (int i = 0; i < N; i++)
    {
        vec[i] = li + i * ((ls - li)/(N-1));
    }
}