/* Punteros a Estructuras 
Realizar un programa que calcule la suma de dos matrices de tipo dinámica
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Estructura
	struct person
	{
		char name[30];
		int age;
	}p1, *dir_p1 = &p1;

//Prototipo de Funci�n
void init_data();
void show_data(person *);

//Variables Globales


//Principal Función
int main(){
	init_data();
	show_data(dir_p1);
		
	// Finalizar
	getch();
	return 0;
}


//Funciones auxiliares
void init_data(){
	fflush(stdin); //Limpiar buffer para poder seguir digitando datos
	cout<<"Digite tu nombre: "; 
	cin.getline((*dir_p1).name, 30, "\n"); //cin.getline(p1.name,30,'\n');
	cout<<"\n";
	cout<<"Digite tu edad: "; 
	cin >> (*dir_p1).age;	
}

void show_data(person *dir_p1){
	cout<<"\n"<<"Su nombre es: "	<<	(*dir_p1).name	<<endl;
	cout<<"\n"<<"Su edad es: "		<<	(*dir_p1).age	<<endl;
}
