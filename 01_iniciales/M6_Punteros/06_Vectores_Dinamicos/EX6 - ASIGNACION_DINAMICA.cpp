/* Punteros 
Asignacion dinámica de arreglos
	new: 		reserva el numero de bytes solicitada por la declaración
	delete: 	libera un bloque de bytes reservado con anterioridad
Pedir al usuario n calificaciones y almacenarlos en un arreglo dinámico
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de Función
void init_notes();
void show_notes();

//Variables Globales
int N;				// Numero de Calificaciones
float *vec_notes; 	// Calificaciones - variable con punteros


// Principal Función
int main(){
	/* cout << "Dirección del puntero"	<<	vec_notes	<<	endl;
	cout << &vec_notes << endl; */
	
	init_notes();
	show_notes();	
	
	/* for (int i = 0; i < N; i++)
	{
		cout << &vec_notes[i] << endl;
	} */

	delete[] vec_notes;
	
	getch();
	return 0;
}

// Funciones de inserción de notas
void init_notes(){
	cout << "Digite el numero de calificaciones: "; cin >> N;
	vec_notes = new float[N]; // Crear el arreglo dinámico
	
	for (int i = 0; i < N; i++)
	{
		cout << "Ingrese una nota: "; cin >> vec_notes[i];	
	}

}

void show_notes(){
	cout << "\n\n" << endl;
	cout << "Mostrando notas del usuario\n";
	for (int i = 0; i < N; i++)
	{
		cout << i << ". Nota: " << vec_notes[i] << endl;
	}
}

