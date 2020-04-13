/* Escribe que lea de la entrada estándar de un vector de numeros y 
muestre en la salida estandar los numeros del vector con sus indices asociados. */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[100], n;
	
	cout << "Digite el numero de elementos que va a tener el arreglo: " ;
	cin >> n;
		
	for(int i=0; i<n; i++){
	cout << "Digite un numero: " ;
	cin >> numero[i];
	}
	
	for(int i=0; i<n; i++){
	cout << i << " -> " << numero[i]<< endl;
	}
	

	cout << "\n\n";
	
	getch();
	return 0;
}
