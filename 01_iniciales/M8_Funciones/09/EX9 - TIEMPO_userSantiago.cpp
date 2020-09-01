#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void animacion();
void calc_anios(int,int&,int&,int&);
void pedir_dato(int&);

int main(){
 int totalDias,dias=1,mes=1,anio=2000;
 gotoxy(31,2);cout<<"DIAS";
 gotoxy(4,4);cout<<"vera la cantidad de anios ,meses y dias que se obtienen a partir de los\n    dias que usted dijite (la fecha inicia del 1/1/2000";
 getch();
 system("cls");
 pedir_dato(totalDias);
 calc_anios(totalDias, dias, mes,anio);
 
 
 getch();
 return 0;
}

void gotoxy(int x,int y){
 HANDLE Manipulador;
 COORD Coordenadas;
    Manipulador= GetStdHandle(STD_OUTPUT_HANDLE);
 Coordenadas.X=x;
 Coordenadas.Y=y;
 SetConsoleCursorPosition(Manipulador,Coordenadas);
}
void animacion(){
 for(int i=0;i<2;i++){
  gotoxy(31,10);cout<<"convirtiendo.";
  Sleep(360);
  system("cls");
  gotoxy(31,10);cout<<"convirtiendo. .";
  Sleep(360);
  system("cls");
  gotoxy(31,10);cout<<"convirtiendo. . .";
  Sleep(360);
  system("cls");
  gotoxy(31,10);cout<<"convirtiendo. . . .",
  Sleep(360);
  system("cls");
 }
}
void calc_anios(int totalDias,int& dias,int& mes,int& anio){
 if(totalDias>=365){
  anio=anio+(totalDias/365);
  dias=dias+(totalDias%=365);
  if(dias>=30){
   mes=mes+(dias/30);
   dias=dias%=30;
  }
 }
    animacion();
 gotoxy(2,3);cout<<" la convercion dio como resultado: "<<dias<<"/"<<mes<<"/"<<anio;
 getch();
}
void pedir_dato(int& totalDias){
 gotoxy(4,2);cout<<"dijite la cantidad total de dias.";
 gotoxy(4,4);cout<<"dias: ";cin>>totalDias;
 system("cls");
}
