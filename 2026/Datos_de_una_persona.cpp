//Leer datos de una persona

#include <iostream>

using namespace std;

int main(){
	
	int edad;
	char nombre[10], sexo[10];
	float altura;
	
	cout<<"Cual es tu nombre: ";
	cin>>nombre;
		
	cout<<"Cual es tu edad: ";
	cin>>edad;
	
	cout<<"Cual es tu sexo: ";
	cin>>sexo;
	
	cout<<"Cual es tu altura: ";
	cin>>altura;
	
	cout<<"\nENombre: "<<nombre<<endl;
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"\nESexo: "<<sexo<<endl;
	cout<<"\nEAltura: "<<altura<<endl;
	
	return 0;
}
