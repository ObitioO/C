#include <iostream>

using namespace std;

int main (){
	
	float prom = 0, a, b, c, d; 
	
	cout<<"ingresa la calificacion del alumno 1: "<<endl; 
	cin>>a;
	cout<<"ingresa la calificacion del alumno 2: "<<endl; 
	cin>>b;	
	cout<<"ingresa la calificacion del alumno 3: "<<endl; 
	cin>>c;
	cout<<"ingresa la calificacion del alumno 4: "<<endl; 
	cin>>d;
	
	prom = (a+b+c+d)/4;
	
	cout<<"El prmedio de los alumnos es: "<<prom; 
	
return 0; 
}
