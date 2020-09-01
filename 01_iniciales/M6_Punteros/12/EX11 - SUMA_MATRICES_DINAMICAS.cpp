/* Matriz Dinámica con Punteros */
/* Realizar un progrma que calcule la suma de dos matrices de tipo dinámica */

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de Función
void init_data();
void show_data(int **, int, int);
void sum_matrix(int **, int **, int, int);
int **transpose(int **, int, int);

//Variables Globales
int **A, **B, **M, **X; //puntero de puntero (puntero matriz) esta señala a un puntero fila - señala a una matriz
int nrow, ncol;

//Principal Función
int main(){
	bool Opt;
	
	init_data();
	
	sum_matrix(A,B,nrow,ncol);
	
	cout<<"\n\nDesea ver la matriz resultante transpuesta?: "<<endl; cin>>Opt;
	
	if(Opt=false){
		show_data(M,nrow,ncol);	
	} else {
		transpose(M,nrow,ncol);
		show_data(X,ncol,nrow);	
	}
		
	//Liberación de matriz
	for(int i=0;i<nrow;i++){
		delete[] A[i];
		delete[] B[i];
		delete[] M[i];
	}
	delete[] A; delete[] B; delete[] M;
	
	// Finalizar
	getch();
	return 0;
}


//Funciones auxiliares
void init_data(){
	cout<<"Digite el numero de filas: "; cin>> nrow;
	cout<<"Digite el numero de columnas: "; cin>> ncol;
	
	// Reserva memoria matriz A
	A = new int*[nrow]; //Esta reservación de memoria es una variable puntero en sí misma
	
	for(int i=0;i<nrow;i++){
		A[i] = new int[ncol]; //Reservando memoria para columnas
	}
	
	cout<<"\nDigitando elementos de la matriz A: ";
	for(int i=0;i<nrow;i++){
		for(int j=0;j<ncol;j++){
			cout<<"\nDigite un numero ["<<i<<"]["<<j<<"]: "; 
			cin >> *(*(A+i)+j); //Equivale a A[i][j]
		}
	}
	
	// Reserva memoria matriz B
	B = new int*[nrow]; //Esta reservación de memoria es una variable puntero en sí misma
	
	for(int i=0;i<nrow;i++){
		B[i] = new int[ncol]; //Reservando memoria para columnas
	}
	
	cout<<"\nDigitando elementos de la matriz B: ";
	for(int i=0;i<nrow;i++){
		for(int j=0;j<ncol;j++){
			cout<<"\nDigite un numero ["<<i<<"]["<<j<<"]: "; 
			cin >> *(*(B+i)+j); //Equivale a B[i][j]
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

void sum_matrix(int **A, int **B, int nrow, int ncol){
	//Reservando memoria
	M = new int*[nrow];
	for(int i=0;i<nrow;i++){
		M[i] = new int[ncol]; 
	}
	
	for(int i=0;i<nrow;i++){
		for(int j=0;j<ncol;j++){
			*(*(M+i)+j) = *(*(A+i)+j) + *(*(B+i)+j);
		}
	}
}

int **transpose(int **M, int nrow, int ncol){
	//int **X;
	//Reservando memoria
	X = new int*[ncol];
	for(int i=0;i<nrow;i++){
		X[i] = new int[nrow]; 
	}
	
	for(int i=0;i<nrow;i++){
		for(int j=0;j<ncol;j++){
			*(*(X+i)+j) = *(*(M+j)+i);
		}
	}
	return(X);	
}




