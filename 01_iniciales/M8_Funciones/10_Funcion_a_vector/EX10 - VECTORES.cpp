/* Modulo de Funciones - 
// Arreglos y funciones
 */

#include<iostream>
#include<conio.h>
using namespace std;

// Prototipos
void quad_vec(int vec[],int);
void show_vec(int vec[],int);

int main(){
	const int N = 5;
	int vec[N]={1,2,3,4,5};
	
	// Mostrar el vector pre-especificado
	cout << "El vector original es: " << endl;
	show_vec(vec,N);
	
	// Realizar el cuadrado de los elementos del vector
	quad_vec(vec,N);
	
	// Mostra el vector convertido
	cout << "\nEl vector transformado es: " << endl;
	show_vec(vec,N);
	
	getch();
	return 0;
}

/* Esta función acepta un argumento como un vector, se tiene que dar (int vec[]) 
en su espacio. También acepta la longitud del vector.
 */
void show_vec(int vec[], int N){
	for (int i = 0; i < N; i++)
	{
		cout << vec[i] << " ";
	}
}

/* Esta función acepta un argumento como un vector, se tiene que dar (int vec[]) 
en su espacio. También acepta la longitud del vector.
 */
void quad_vec(int vec[], int N){
	for (int i = 0; i < N; i++)
	{
		vec[i] = vec[i] * vec[i];
	}
}
