/* Punteros 
	Utilice &n para mostrar la dirección en la memoria de n; 
	Utilice *n para mostrar el valor de la variable cuya direccion está almacenada en n
*/


#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num = 20;
	int *dir_num; // Declaración puntero
	
	dir_num = &num; // Conexión puntero
	
	cout << "Se crea una variable entera n y un puntero a la misma dir_num" << endl;

	cout << "Valor num (num)"					<<	"\t\t "	<<	num			<<endl;
	cout << "Direccion num (*num)"				<<	"\t\t "	<<	&num		<<endl;

	cout << "\n" << endl;

	cout << "Valor dir_num (dir_num)"			<<	"\t\t "	<<	dir_num		<<endl;
	cout <<	"Valor de direccion (*dir_num)"		<<	"\t\t "	<<	*dir_num	<<endl;
	cout <<	"Direccion dir_num (&dir_num)"		<<	"\t\t "	<<	&dir_num	<<endl;
		
	getch();
	return 0;
}


