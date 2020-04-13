/* Estructura Básica en C++ 
// Las estructuras permiten una disminución del numero de variables que se utilizan en el código.
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Sintaxis de estructura
struct Person{
	char nombre[20];
	int edad;
} p1; // Acá se crean las variables de tipo estructura

// Sintaxis de estructura 2
struct Person1{
	char nombre[20];
	int edad;
}; // Acá se crean las variables de tipo estructura

int main(){
	// Asignación de datos en la variable con la estructura GLOBAL
	cout 	<<	"Nombre: ";		cin.getline(p1.nombre,	20,	'\n');
	cout 	<<	"Edad: ";		cin 	>> 	p1.edad;
	cout 	<<	"\n";
	// Mostrando los datos asignados
	cout 	<<	"Imprimiendo datos p1 (global)";
	cout 	<<	"\n";
	cout 	<<	"Nombre: " 	<< p1.nombre << endl;
	cout 	<<	"Edad: " 	<< p1.edad << endl;
	
	// APRENDER
	// // También se pueden crear variables LOCAL
	// Person1 *dir_p2, p2; // Aca se creó un segunda persona con su puntero respectivo
	// dir_p2 = &p2; 		// Conexión de puntero
	// cout 	<<	"\n";
	// cout 	<< "Nombre 2: "; 	
	// getline(cin, (*dir_p2).nombre, 20, '\n');
	// cout 	<<	"\n";
	// cout	<< "Edad 2:	";		cin 	>> (*dir_p2).edad;
	// // Mostrando los datos asignados
	// cout 	<<	"Imprimiendo datos p2 (local)";
	// cout 	<<	"\n";
	// cout 	<<	"Nombre 2: "	<< p2.nombre 	<< endl;
	// cout 	<<	"Edad 2: " 		<< p2.edad 		<< endl;
	
	getch();
	return 0;
}
