/* Escriba un programa que lea de la entrada estándar de dos numeros y muestre en la salida est�ndar su suma, resta, 
multiplicación y división */

#include<iostream>
#include <wchar.h>
#include <locale.h>
#include <windows.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Spanish");

	if (setlocale(LC_ALL, "Spanish") == NULL) {
	    puts("Unable to set locale");
	}

	SetConsoleCP(1252); // Cambiar STDIN -  Para máquinas Windows
    SetConsoleOutputCP(1252); // Cambiar STDOUT - Para máquinas Windows

	float n1, n2;
	float sum = 0, rest = 0, mult = 0, div = 0; // Definir las variables
	
	cout <<"Digite el primer número: " ;
	cin  >> n1;
	
	cout <<"Digite el segundo número: " ;
	cin  >> n2;
	
	sum  = n1 + n2 ; 
	rest = n1 - n2 ;
	mult = n1 * n2 ;
	div  = n1 / n2 ;
	
	cout <<"\nLa suma de dígitos es: " << sum <<endl;
	cout <<"\nLa resta de dígitos es: " << rest <<endl;
	cout <<"\nLa multiplicacion de dígitos es: " << mult <<endl;
	cout <<"\nLa division de dígitos es: " << div <<endl;

	cin.ignore();
	cin.get();
	
	return 0;
}

