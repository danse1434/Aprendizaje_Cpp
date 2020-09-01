/* Desarrolle un programa que lea de la entrada estándar un vector de enteros y 
determine el mayor elemento del vector. */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vec[100], n, max=0;
	
	cout << "Digite el numero de elementos del arreglo: "; 	cin >> n;
	
	for(int i = 0;i<n;i++){
		cout << i+1 << ". Digite un numero: "; 
		cin >> vec[i]; 		
		
		if(vec[i] > max){
			max = vec[i];
		} else{
			max = max;
		}
	}
	
	cout << "\nEl mayor elemento del vector es: " << max << endl;
	cout << "\n\n";
	
	getch();
	return 0;
}
