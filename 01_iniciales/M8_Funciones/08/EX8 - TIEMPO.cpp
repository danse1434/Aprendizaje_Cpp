/* Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que represente el numero total de d�as desde la fecha 1/1/2000 y par�metros de
referencia nombrados a�os, monthes, y d�a. La funci�n es calcular el a�o, month, y days actual para el numero dado de d�as que se le trasmitan. Para este problema
suponga que cada a�o tienen 365 d�as y cada month tiene 30 d�as. */

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void calc_years(int,int&,int&,int&);

int main(){
	int year, month, days;
	int days_from;
	
	cout << "Digite el numero total de días desde 01-Ene-2000: "; 	cin >> days_from;
	
	calc_years(days_from, year,month,days);
	cout<<"Fecha equivalente a la cantidad de dayss digitados: "	<<endl;
	cout<<"Ano: "	<<year	<<endl;
	cout<<"Mes: "	<<month	<<endl;
	cout<<"Dias: "	<<days	<<endl;			
	getch();
	return 0;
}


void calc_years(int days_from,int& year,int& month,int& days){
	year 	= days_from/365; year += 2000;
	month 	= (days_from%365)/30; month += 1;
	days 	= ((days_from%365)%30); days += 1;
}
