/* Modulo Funciones -
// Tiempo
 */

#include<iostream>
#include<conio.h>
using namespace std;

// Prototipo
void tiempo(int,int&,int&,int&);

int main(){
	int totalSeg, horas, min, seg;
	
	// La función sólo recibe *totalSeg*
	cout << "Digite el numero total de segundos: "; 	cin >> totalSeg;
	// Funciones
	tiempo(totalSeg, horas,min,seg);

	cout<<	"Tiempo equivalente a la cantidad de segundos digitados: "	<<endl;
	cout<<	"(sólo se utilizan valores enteros de cada unidad)"			<<endl;
	cout<<	"Horas: "			<<horas	<<endl;
	cout<<	"Minutos: "			<<min	<<endl;
	cout<<	"Segundos: "		<<seg	<<endl;
			
	getch();
	return 0;
}

// Definición
void tiempo(int totalSeg,int& horas,int& min,int& seg){
	horas = totalSeg/3600;
	// totalSeg = totalSeg/3600;
	min = totalSeg/60;
	seg = totalSeg%60;
}
