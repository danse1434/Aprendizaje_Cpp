/* Punteros 
// Rellenar un array con n numeros, posteriormente utilizando punteros determinar el menor elemento del arreglo
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num[10];  
	int *dir_num;
	int aux = 100;
	
	for(int i=0; i<10; i++){
		cout << "Digite un numero [" <<i <<"]: ";  cin>>num[i];
	}	
	
	dir_num = num; //Posicion de memoria comienza numeros

		
	for(int i=0; i<10; i++){
		
		if(*dir_num < aux){
			aux = *dir_num;
		} 
		dir_num++;
	}
		
	cout << "El menor numero es " 				<< aux 		<< endl;
	cout << "La posicion del menor numero es " 	<< &aux 	<< endl;
		
	getch();	
	return 0;
}


