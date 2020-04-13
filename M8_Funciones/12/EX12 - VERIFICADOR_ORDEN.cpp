// Realice una funcion que tome como parametros un vector y su parametro y diga si el vector esta ordenado crecientemente
// Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual 
// que el elemento le precede en el vector. 

#include<iostream>
#include<conio.h>
using namespace std;

void data_init();
void Comprobacion(int vec[],int);
//char ver_ord(int vec[], int);

// Variables en espacio global
int vec[100], N; 

int main(){
	data_init();
	Comprobacion(vec,N);

	getch();
	return 0;
}

//char ver_ord(int vec[], int N){
//
//	for(int i=1;i<N;i++){
//		if(vec[i]<vec[i-1]){
//			char ver[] = "FALSO";
//			return ver;
//		} else {
//			char ver[] = "VERDADERO";
//			return ver;
//		}
//	}
//	
//}

/* Crear un vector con un tamaño más pequeño N (N<100), y empezar a llenarlo 
de manera iterativa. */
void data_init(){
	cout << "Digite el numero de elementos del vector: ";	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << i + 1 << ". Digite un numero: ";			cin >> vec[i];
	}
}

/* Determina si el vector tiene los elementos ordenados de manera creciente
  */
void Comprobacion(int vec[], int N){
 int aux = 1;
 for (int i = 1; i < N; i++)
 {
	// Si el elemento *i* de vector es mayor que su antecesor *i-1* se le 
	// añade un punto a la var sum
  	if(vec[i] >= vec[i-1]){ 
   	aux += 1;
  }
 }

 if(aux == N){
  cout<<"\nEl arreglo esta ordenado crecientemente."<<endl;
 }
 else{
  cout<<"\nEl arreglo NO esta ordenado crecientemente."<<endl;
 }
}
