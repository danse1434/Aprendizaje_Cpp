/* Realice un programa que piense un numero entero entre el 1 y el 100. EL programa debe generar un numero aleatorio 
en ese mismo rango [1-100], e indicarle al usuariosi el numero que digito es menor o mayor al numero aleatorio, así 
hasta que lo adivine, y por ultimo mostratle el numero de intentos que llevo .

variable = limit_inf + rand() % (limit_sup + 1 - limit_inf); */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
 
 using namespace std;
 
 int main(){
	int numero, dato, contador = 0;
	
	srand(time(NULL)); // generar un numero aleatorio 
	dato = 1 + rand() % (100);
	
	do{
		cout << "Digite un numero: "; cin >> numero;
		if(numero > dato){
			cout << "\nDigite un numero menor\n";
		}
		if(numero < dato){
			cout << "\nDigite un numero mayor\n";
		}
		contador ++;
	} while(numero != dato);
	
	cout <<"\n Felicidades adivinastes el numero \n";
	cout <<"\n Numero de intentos: " << contador << endl;
	
	getch();	
 	return 0;
 }
