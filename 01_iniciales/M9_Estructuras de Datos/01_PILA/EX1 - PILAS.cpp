/* Pilas - Stack
// Hacer un programa para agregar numero enteros a una pila hasta que el usuario lo decida, 
despues mostrar los elementos de la pila
 */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

// Variables Globales

// Estructura de nodo
struct Nodo{
	int dato;
	struct Nodo *siguiente;
};

// Prototipos
void pull(Nodo *&,	int);
void pop(Nodo *&,	int &);

// Función Principal
int main(){
	Nodo *pila = NULL;
	int dato; char rpt;
	
	// Adición de elementos a la pila
	do{
		cout	<<	"Digite un numero: "; cin>>dato;
		pull(pila, dato);
		
		cout	<<	"\n";
		cout	<<	"Desea agregar otro elemento a PILA (S/N): ";  cin>>rpt;
	} while((rpt=='S')||(rpt=='s')||(rpt=='Y')||(rpt=='y'));
	
	// Obtención de elementos
	cout	<< "\n";
	cout	<< "Sacando todos los elementos de la pila: ";
	// Sacar elementos de la pila
	while (pila != NULL) // Mientras no se llegue al fondo de la pila
	{
		pop(pila, dato);
		if (pila != NULL){
			cout	<<	dato	<<	" , ";
		} else {
			cout	<<	dato	<<	" .";
		}
	}
	getch();
	return 0;
}

// Funciones auxiliares
void pull(Nodo *&pila, int n){
	Nodo *new_node 		= new Nodo();
	new_node->dato 		= n;
	new_node->siguiente = pila;
	pila 				= new_node;
	cout<<"\tElemento " << n <<" ha sido agregado a PILA correctamente"	<<endl;	
}


void pop(Nodo *&pila, int &n){
	Nodo *aux 			= pila;
	n 					= aux->dato;
	pila 				= aux->siguiente;
	delete aux;
}
