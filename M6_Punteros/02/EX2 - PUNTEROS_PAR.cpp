/* Punteros */
// Ejercicios - comprobar si un numero es par o impar, y se�alar la posicion de memoria donde esta guardado

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num; 
	int *dir_num;
	
	cout << "Digite un numero: "; cin >> num;
	
	dir_num = &num; // Guardar posicion de memoria
	
	if(*dir_num%2 == 0){

		cout << "El numero " << *dir_num << " es PAR" << endl;
		cout << "Posicion: " <<  dir_num << endl;

	} else {

		cout << "El numero " << *dir_num << " es IMPAR" << endl;
		cout << "Posicion: " <<  dir_num << endl;
		
	}
		
	getch();
	return 0;
}


