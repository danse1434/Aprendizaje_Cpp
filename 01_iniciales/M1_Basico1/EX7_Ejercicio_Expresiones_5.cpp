/* Realice un factor que calcule la siguiente expresión */
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 int main(){
 	float x, y, z = 0;
 	
 	cout<<"Digite el valor x "; cin>>x;
 	cout<<"Digite el valor y "; cin>>y;
  	
  	z = sqrt(x)/(pow(y,2) - 1);
  	
	cout.precision(6);
 	cout<<"\nEl resultado es " << z << endl;
 	
 	return 0;
 }
 
