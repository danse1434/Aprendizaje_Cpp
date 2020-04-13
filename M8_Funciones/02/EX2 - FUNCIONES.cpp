/* Modulo Funciones 
// Plantillas de funciones, esto sirve para crear funciones que acepten múltiples tipos de números
 */

#include<iostream>
#include<conio.h>

// Prototipo de Función
template <class TIPOD>
void mostrarABS(TIPOD numero);

using namespace std;

int main(){
	int 	num1 = 4;
	float 	num2 = 56.67;
	double 	num3 = -312.12133;
	//int num4[3] = {1,3,4};
	
	mostrarABS(num1);
	mostrarABS(num2);
	mostrarABS(num3);
	//mostrarABS(num4);
	
	getch();
	return 0;
}

// Definición de Función
template <class TIPOD>
void mostrarABS(TIPOD numero){
	if(numero < 0){
		numero = numero * -1;
	}
	cout << "El valor absoluto de numero es: " << numero << endl;
}

