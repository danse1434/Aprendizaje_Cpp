/* Punteros 
// Pedir al usuario N numeros, almacenarlos en un arreglo dinámico, ordenarlos en modo ascendente y mostrar en pantalla
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de Función
void init_data();
void sort_data(float *, int);
void sort_insertion(float *, int);
void show_data();


//Variables Globales
int N;			// Numero de vectores
float *vec_elem; // Vectores con elementos


//Principal FunciÓn
int main(){
	int option;
	
	init_data();
	
	cout	<<"\n";
	cout	<<"Escoga un algoritmo para el ordenamiento: " 									<<endl;
	cout	<<"Escriba 1 para algoritmo burbuja; escriba 2 para algoritmo de insercion " 	<<endl; cin>>option;
		
	switch(option){
		case 1:
		sort_data(vec_elem, N); break;
		case 2: 
		sort_insertion(vec_elem, N); break;
		default: 
		cout << "Las opciones escritas no son validas"; 
		return 0;
		break;
		
	}
		
	show_data();	
	
	delete[] vec_elem;


	
	getch();
	return 0;
}


//Funciones auxiliares
void init_data(){
	cout<<"Digite los elementos del vector: "; cin>>N;
	vec_elem = new float[N]; // Crear el arreglo durante la ejecución
	
	for(int i=0; i<N; i++){
		cout << "Ingrese el elemento: "<< i << ". "; cin >> *(vec_elem + i);
	}
}


void show_data(){
	cout<<"\n\nMostrando datos del vector\n";
	for(int i=0;i<N;i++){
		cout << i << ". Elemento: " << vec_elem[i] << endl;
	}
}


void sort_data(float *vec_elem, int N){
	float aux;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(*(vec_elem+j) > *(vec_elem+j+1)){ //Si el elemento j > elemento j+1
				aux = *(vec_elem+j);
				*(vec_elem+j) = *(vec_elem+j+1);
				*(vec_elem+j+1) = aux;
			}
		}
	}
	
}

void sort_insertion(float *vec_elem, int N){
	float aux; int P;
	
	for(int i=0;i<N;i++){
		P = i; //Posici�n del arreglo
		aux = *(vec_elem+i); // Resultado en arreglo
		
		while((P>0) && (*(vec_elem+P-1)>aux)){
			*(vec_elem+P) = *(vec_elem+P-1);
			P--;
		}
		*(vec_elem+P) = aux;
	}
	
}






