/* Realice un factor que calcule la siguiente expresión */
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 int main(){
 	float a, b, c, x1 = 0, x2 = 0;
 	
 	cout<<"Digite el valor a "; cin>>a;
 	cout<<"Digite el valor b "; cin>>b;
 	cout<<"Digite el valor c "; cin>>c;
  	
	x1 = (-b + sqrt(pow(b,2) - (4*a*c)))/(2*a);
  	x2 = (-b - sqrt(pow(b,2) - (4*a*c)))/(2*a);
	
	cout.precision(6);
 	cout<<"\nEl valor de la primera raiz es " << x1 << endl;
 	cout<<"\nEl valor de la segunda raiz es " << x2 << endl;
 	
 	return 0;
 }
