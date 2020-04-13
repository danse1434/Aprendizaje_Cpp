/* Módulo de Funciones 
// Realice una función que dada una matriz y un numero de fila de la matriz devuelva el menor 
// de los elementos almacenados en dicha fila.
*/

#include<iostream>
#include<conio.h>
using namespace std;

// Prototipos de funciones
void init_data(); //solicitar los datos de función
void show_data(); //mostrar los datos de función
void min_colspace(int m[][100], int, int); //obligatorio poner ncol max
void min_rowspace(int m[][100], int, int); //obligatorio poner ncol max

// Variables globales
int m[100][100], nrow, ncol;


int main(){
	
	init_data();
	
	cout <<	"\n\n";
	cout << "Se ha ingresado la siguiente matriz" << endl;
	show_data();
	/* Mostrar los datos de la matriz recien ingresada */
	
	cout <<	"\n\n";
	/* Se escoge alternativa de operación */
	int opt;
	cout <<	"Escoga una alternativa, por favor." << endl;
	cout <<	"1. para obtener el valor minimo en la columna deseada" << endl;
	cout <<	"2. para obtener el valor minimo en la fila deseada"  	<< endl;
	cin >> opt;

	switch (opt)
	{
	case 1:
		min_colspace(m,nrow,ncol); break;
	case 2:
		min_rowspace(m,nrow,ncol); break;
	default:
		cout << "El valor ingresado no es adecuado, vuelva a intentarlo";
		break;
	}


	getch();
	return 0;
}



// FUNCIONES
// Función para tomar los datos de elementos de la matriz estática
void init_data(){
	// Digita número de filas y columnas
	cout << "Digite el numero de filas: ";		cin >> nrow;
	cout << "Digite el numero de columnas: ";	cin >> ncol;
	
	// Solicitar el valor de cada elemento de la matriz
	for(int i = 0; i < nrow; i++)
	{
		for(int j = 0; j < ncol; j++)
		{
			cout	<<	"Digite un numero ["<<i<<"]["<<j << "]:";
			cin		>>	m[i][j];
		}
	}
	// Se obtiene una matriz *m* con los elementos deseados
}

// Función para mostrar los elementos de la matriz estática ingresada
void show_data(){
	// Mostrar el valor de cada elemento de la matriz

	for (int j = 0; j < ncol; j++) 		// Columnas
	{
		cout <<	"\t" << "[," << j << "]" << "\t";
	}
	cout << "\n"; // Espacio

	for(int i = 0; i < nrow; i++)
	{
		cout	<<	"[" << i <<",]";

		for(int j = 0; j < ncol; j++)
		{
			cout << "\t" <<	m[i][j] << "\t";
		}
		cout << endl;
	}
	// Se imprime la matriz
}


// 
void min_colspace(int m[][100], int nrow, int ncol){
	// Variable de número de columna
	int col_number;
	// Digitar el numero de columna del cual se desea obtener min()
	cout <<	"Digite el numero de columna del cual desea obtener el menor valor: "; 
	cin >>	col_number;
	/* Se define la variable min como un entero, que eqv al 
	primer valor de la columna deseada */
	int min = m[0][col_number];
	
	
	for(int i = 1; i < nrow; i++)
	{
		if(m[i][col_number] < min){
			min = m[i][col_number];
		} else{
			min = min;
		}
	}
	cout <<	"El menor valor en la columna "<<	col_number <<	" es: " << min;
	}


void min_rowspace(int m[][100], int nrow, int ncol){
	// Variable de número de fila
	int row_number;
	// Digitar el numero de fila del cual se desea obtener min()
	cout <<	"Digite el numero de fila del cual desea obtener el menor valor: "; 
	cin >>	row_number;
	/* Se define la variable min como un entero, que eqv al 
	primer valor de la fila deseada */
	int min = m[row_number][0];
		
	for(int i = 1; i < ncol; i++)
	{
		if(m[row_number][i] < min){
			min = m[row_number][i];
		} else{
			min = min;
		}
	}
	cout <<	"El menor valor en la fila "<<	row_number <<	" es: " << min;
	}

