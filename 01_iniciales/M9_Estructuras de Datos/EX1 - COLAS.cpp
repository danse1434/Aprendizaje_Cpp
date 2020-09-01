/* COLAS - Inserción de Elemento */
/* 	1. Crear espacio en memoria para almacenar nodo
	2. Asignar ese nuevo nodo al dato que queremos insertar
	3. Asignar puntero frente y fin al nuevo nodo */
	
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

// Variables Globales

// Estructuras
struct Nodo{
	int dato;
	Nodo *siguiente;
};

// Prototipos
void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);

// Función Principal
int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato;
	
	cout<<"Digite un numero: "; cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"Digite un numero: "; cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"Digite un numero: "; cin>>dato;
	insertarCola(frente,fin,dato);
	
	getch();
	return 0;
}

// Funciones auxiliares
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	// Primero - Crear el nuevo nodo
	Nodo *nuevo_nodo = new Nodo();
	// Segundo - Asignar el dato a insertar con el nuevo nodo
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	// Tercero - Verificar si está vacía
	
	if(cola_vacia(frente)){ //Si la cola esta vacia 
		frente = nuevo_nodo;
	} else{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
	cout<<"Elemento "<<n<<" insertado correctamente.\n";
}

bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true : false; //	if(frente==NULL){ return true; } else {return false;}
}
