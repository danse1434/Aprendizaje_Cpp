/* Modulo de Funciones
// Funciones para Estructuras
 */

#include<iostream>
#include<conio.h>
using namespace std;

// Estructura de numeros complejos
struct Complex{
	float real, img;
} z1,z2;

// Funciones prototipos
void init_data();
Complex sum(Complex, Complex); // Función con el tipo de estructura
void show_sum(Complex);


int main(){
	init_data();
	Complex x = sum(z1,z2);
	show_sum(x);

	
	getch();
	return 0;
}

//FUNCIONES
void init_data(){
	cout	<< "Digite los datos del primer numero complejo: "		<<endl; 
	cout	<< "Parte real: "; 				cin >> z1.real;
	cout 	<< "Parte imaginaria: "; 		cin >> z1.img; 
	
	cout	<< "\n";
	cout	<< "Digitado: " <<	z1.real << " + " << z1.img << "i" 	<<endl;
	cout	<< "\n";

		
	cout	<< "\n";
	cout	<< "Digite los datos del segundo numero complejo: "<<endl; 
	cout 	<< "Parte real: "; 				cin >> z2.real;
	cout 	<< "Parte imaginaria: "; 		cin >> z2.img; 
	cout	<< "\n";
	cout	<< "Digitado: " <<	z2.real << " + " << z2.img << "i" 	<<endl;
	}

Complex sum(Complex z1, Complex z2){
	z1.real += z2.real;
	z1.img 	+= z2.img;
	return z1;
	}
	

void show_sum(Complex x){
	cout	<< "\n";
	cout	<< "Resultado de la suma: "	<<	x.real	<<	" + "	<<	x.img << " i";
}
