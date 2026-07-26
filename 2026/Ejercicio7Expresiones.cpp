#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float a, b, c, d, res = 0 ;
	
	cout<<"ingresa el valor de a " ;
	cin>>a; 
	cout<<"ingresa el valor de b " ;
	cin>>b;	
	cout<<"ingresa el valor de c " ;
	cin>>c;
	cout<<"ingresa el valor de d " ;
	cin>>d;
	
	res = a + (b/(c-d));
	
	cout<<"El resultado es: "<< res; 
	// Ejercicio realizado por Ovidio el 25/07/2026 21:48 pm
	
	return 0;
}
