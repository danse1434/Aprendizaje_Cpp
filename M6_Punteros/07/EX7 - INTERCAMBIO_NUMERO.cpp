/* Punteros 
// Intercambiar el valor de dos variables
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de Función
float exchange(float *, float *); // Se declara la variable como puntero

//Variables Globales

// Principal Función
int main(){
	float n1 = 20.8, n2 = 6.78;
	
	cout	<<	"Primer numero: "	<<	n1	<<	endl;
	cout	<<	"Segundo numero: "	<<	n2	<<	endl;
	
	exchange(&n1,&n2);
	
	cout	<<	"\n\n\t";
	cout	<<	"Variables Alternadas"			<< endl;
	cout	<<	"Primer numero: "		<<	n1	<< endl;
	cout	<<	"Segundo numero: "		<<	n2	<< endl;
	
	getch();
	return 0;
}

// Funciones auxiliares
float exchange(float *dir_n1, float *dir_n2){
	float aux;
	
	aux 	= *dir_n1;	
	*dir_n1 = *dir_n2;
	*dir_n2 = aux;
	return(aux);
}




