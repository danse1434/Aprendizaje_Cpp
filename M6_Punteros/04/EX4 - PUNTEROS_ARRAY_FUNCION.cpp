/* Punteros 
// Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar cuales son numeros pares e impares
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num[10];  // Vector de 10 posiciones 
	int *dir_num; // Variable puntero
	
	dir_num = num; //Conectar puntero con variable

	// Procedimiento especificación de elementos de vector *num*
	for(int i=0; i<10; i++){
		cout << "Digite un numero [" << i <<"]: ";  cin>>num[i];
	}
	
	// Procedimiento de revisión de condición "par" o "impar"
	for(int i=0; i<10; i++){
		
		if(*dir_num%2 == 0){ // Si el valor de apuntamiento 
			cout << "El numero " << *dir_num << " es par" 	<< endl;
			cout << "Posicion: " <<  dir_num 				<< endl;
		} else {
			cout << "El numero " << *dir_num << " es impar" << endl;
			cout << "Posicion: " <<  dir_num 				<< endl;
		}
		
		dir_num++; // Se adiciona para cambiar la posición del puntero (importante)
	}



	cout << "\n\n\n" << endl;

	// Determinación de valor mínimo y máximo 
	dir_num = num; // Reinicio del puntero
	int min = 100;

	for(int i=0; i<10; i++){
		if(*dir_num <= min){
			min = *dir_num;
		} 
		dir_num++;
	}
	cout << "El menor valor en la serie es " << min << endl;
	
	dir_num = num; // Reinicio del puntero
	int max = 0;

	for(int i=0; i<10; i++){
		if(*dir_num >= max){
			max = *dir_num;
		} 
		dir_num++;
	}
	cout << "El mayor valor en la serie es " << max << endl;





	cout << "\n\n\n" << endl;

	/* Extraccion de elementos pares */
	// Definición de variables adicionales
	int vec[10]; 	// Vector de 10 posiciones
	int *dir_vec; 	// Variable puntero
	
	dir_num = num; // Reinicio del puntero
	// Conectar puntero con variable
	dir_vec = vec; 
	
	// Colocar los elementos dir_num en el vector vec de acuerdo a si es par, si no es 
	// par no se coloca el vector en la posición; se corrige por que antes se tomaban eran 
	// los punteros :( que no son ARRAYS

for (int i = 0; i < 10; i++){
	if(*dir_num%2 == 0){
		vec[i] = *dir_num; 
	}	else {
		vec[i] = 0;
	}
	dir_num++; 
}
	
	// Expresión de elementos pares
for (int i = 0; i < 10; i++){
	if (*dir_vec != 0){
	cout << *dir_vec << endl;
	}
	dir_vec++;
	}
			
	getch();
	return 0;
}


