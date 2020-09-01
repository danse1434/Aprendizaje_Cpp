/* Modulo de funciones / 
// Función con suma de elementos de vectores
 */

#include<iostream>
#include<conio.h>
using namespace std;

// Prototipos
void data_init();
int calc_sum(int vec[], int);

// Variables en espacio global
int vec[100], N; 

// MAIN
int main(){
	data_init();
	
	cout << "\nLa suma de los elementos del vector es: ";
	cout << calc_sum(vec,N) << endl;
	
	getch();
	return 0;
}


/* Esta función permite tener un vector de tamaño N, y a continuación solicita 
al usuario la digitación de los elementos */
void data_init(){
	cout << "Digite el numero de elementos del vector: ";
	cin >> N;
	
	for(int i=0;i<N;i++){
		cout << i+1 << ". Digite un numero: ";
		cin >> vec[i];
	}
}
/* Esta función acepta al vector vec[] y suma todos sus elementos de manera 
iterativa para llegar a un entero que representa la suma*/
int calc_sum(int vec[], int N){
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += vec[i];
	}
	return sum;
}

/* Esta función permite mostrar en consola los elementos del vector digitado */
void show_vec(int vec[],int N){
	for (int i = 0; i < N; i++)
	{
		cout << vec[i] << " ";
	}
}

