/* Punteros 
// Correspondencia entre Array y Punteros
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num[] = {1,2,3,4,5};
	int *dir_num; // Valor de variable almacenada en dir_num es int

	//dir_num = &num[0]; Cuando queriamos mostrar solo un valor
	// cout << &dir_num;
	
	dir_num = num;

	for(int i=0; i<5; i++){
		cout << "Elemento del vector [" << i << "]: "<< *dir_num++ << endl; //Se adiciona ++ para que sume
	}
	
	cout << "\n\n";
	
	for(int i=0; i<5; i++){
		cout << "Posicion de memoria [" << i << "] es: "<< dir_num++ << endl; //Se adiciona ++ para que sume
	}

	
	// cout << &dir_num;
	getch();
	return 0;
}


