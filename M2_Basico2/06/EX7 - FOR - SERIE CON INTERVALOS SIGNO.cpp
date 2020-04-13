/* Escriba un programa que calcule el valor de 1-2+3-4+5-6...M */

#include<iostream>
#include<conio.h>
#include<math.h>
 
 using namespace std;
 
 int main(){
	int suma = 0, signo = 0, n;
	
	cout <<"Digite el numero de valores de la serie: "; cin	>>	n;
	
	for(int i = 1; i <=n; i++){
		
		if (i%2 == 0){ // Definición de signo por modulo de division por par
			signo = -i;
		} else {
			signo = +i;
		}
		
		suma += signo;
	}
	
	cout <<"\nLa suma total es: " << suma << endl;
	
	getch();	
 	return 0;
 }
