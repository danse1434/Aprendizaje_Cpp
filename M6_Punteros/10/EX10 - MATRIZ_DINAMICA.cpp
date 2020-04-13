/* Matriz Dinámica con Punteros */
/* Rellenar una matriz M (nrow x ncol) y mostrar con su puntero */

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de Función
void init_data();
void show_data(int **, int, int);

//Variables Globales
int **M; //puntero de puntero (puntero matriz) esta señala a un puntero fila - señala a una matriz
int nrow, ncol;

//Principal Funcion
int main()
{
	init_data();

	show_data(M,nrow,ncol);
	
	//Liberaci�n de matriz
	for(int i=0;i<nrow;i++){
		delete[] M[i];
	}
	delete[] M;
	
	// Finalizar
	getch();
	return 0;
}


//Funciones auxiliares
void init_data(){
	cout	<<"Digite el numero de filas: "; 	cin>> nrow;
	cout	<<"Digite el numero de columnas: "; cin>> ncol;
	
	M = new int*[nrow]; //Esta reservación de memoria es una variable puntero en só misma
	
	for (int i = 0; i < nrow; i++)
	{
		M[i] = new int[ncol]; //Reservando memoria para columnas
		
	}
	
	
	cout	<<"\nDigitando elementos de la matriz: ";
	
	for (int i = 0; i < nrow; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			cout	<<"\nDigite un numero ["<<i<<"]["<<j<<"]: "; 
			cin 	>> *(*(M+i)+j); //Equivale a M[i][j]
		}
		
	}
}

void show_data(int **M, int nrow, int ncol){
	cout<<"\n\nImprimiendo matriz:\n";
	
		for(int i=0;i<nrow;i++){
			for(int j=0;j<ncol;j++){
				cout << *(*(M+i)+j) << "  ";
		} cout<<"\n";
	}
}






