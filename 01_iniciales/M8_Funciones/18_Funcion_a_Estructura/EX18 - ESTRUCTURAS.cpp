/* Modulo de Funciones
// Funciones para Estructuras
 */

#include<iostream>
#include<conio.h>
using namespace std;

struct person{
	char nombre[30];
	int edad;
} p1;

// Prototipos
void init_data();
void show_data(person);


int main(){
	
	init_data();
	cout<<"\n";
	cout<<"\nLos datos que se han ingresado son: ";
	show_data(p1);
	
	getch();
	return 0;
}



//FUNCIONES
void init_data(){
	cout <<	"Digite su nombre: "; 	cin.getline(p1.nombre,30,'\n');
	cout << "Digite su edad: "; 	cin	>>	p1.edad;
}

void show_data(person p){
	cout <<	"\nNombre: "	<< p.nombre	<<endl;
	cout <<	"Edad: "		<< p.edad	<<endl;
}
