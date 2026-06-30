#include<iostream>

using namespace std;


int main(){
	
	float a, b, c, d, resultado = 0;
	
	cout<<"Ingresa el valor de a: ";
	cin>>a;
	cout<<"ingresa el valor de b: ";
	cin>>b;
	cout<<"Ingresa el valor de c: ";
	cin>>c;
	cout<<"ingresa el valor de d: ";
	cin>>d;
	
	resultado = a+(b/(c-d));
	
	cout<<"El resultado de la expresion es: "<<resultado;
	
	
	
	return 0;
}
