/* Punteros a Estructuras */
/* Realizar un progrma que calcule la suma de dos matrices de tipo dinámica */

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Estructura
struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = &alumno[0]; //Arreglo de estructura

//Prototipo de Función
void pedir_datos();
void comprobarMejorPromedio(Alumno *);

//Variables Globales
	


//Principal Función
int main(){
	pedir_datos();	
	comprobarMejorPromedio(puntero_alumno);
	getch();
	return 0;
}


//Funciones auxiliares
void pedir_datos(){
	for(int i=0;i<3;i++){
		fflush(stdin); //Limpiar buffer para poder seguir digitando datos
		cout<<"Digite el nombre: ";
		cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"Digite la edad: ";
		cin>>(puntero_alumno+i)->edad;
		cout<<"Digite el promedio: ";
		cin>>(puntero_alumno+i)->promedio;
		
	}
}

void comprobarMejorPromedio(Alumno *puntero_alumno){
	float mayor = 0.0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){
			mayor = (puntero_alumno+i)->promedio;//sacamos el mayor promedio
			pos = i;// guardamos la posicion del mayor promedio
		}
	}
	
	//Imprimimos los datos del alumno con el mejor promedio	
	cout<<"\nAlumno con el mejor promedio: "<<endl;
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;	
}
