/* Punteros 
Transmisión de Arreglos
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de Función
int find_max(int *, int);

//Variables Globales

//Principal Función
int main(){
	const int N = 5;
	int num_vec[N] = {3,5,2,8,1};
	
	cout	<<	"Para el vector con elementos: ";
	for (int i = 0; i < N; i++){
		cout << num_vec[i] << " ";
	}
	
	cout	<<	"\n\n";
	cout	<<	"El mayor elemento es: "	<<	find_max(num_vec,	N); 
	// Notese que la función recibe como argumento a todo un vector
	//num_vec = &num_vec[0];
	
	getch();
	return 0;
}

//Funciones auxiliares
int find_max(int *dir_vec, int N){ 
	// Para aceptar un arg de vector
	int max = 0;
	
	for (int i = 0; i < N; i++){
		//Se mapea al vector con la dirección
		if (*dir_vec + i > max){
			max = *(dir_vec + i); 
		}
	}
	return max;
}






