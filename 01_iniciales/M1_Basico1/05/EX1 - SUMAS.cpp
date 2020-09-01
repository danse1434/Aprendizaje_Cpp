/* Realice un programa que lea de la entrada est�nda numeros hasta que se introduzca un cero. En ese momento el programa
debe terminar y mostrar en la salida est�ndar el n�mero de valores mayores que cero le�dos */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int numero;
	
	do {
		cout << "Digite un numero: "; cin >> numero; 
	} while (!(numero == 0)); // si no esta vuelve a pedir el numero
			
	getch();
	return 0; 
}

