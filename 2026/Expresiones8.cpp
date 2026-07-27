#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main() {
	int x, y, aux;
	cout<<" Dame el valor de X: " ;
	cin>>x;
	cout<<"Dame el valor de Y: " ;
	cin>>y;
	
	aux = x;
	x = y;
	y = aux; 
	
	cout<<"El nuevo valor de x es: " <<x<<endl;
	cout<<"El nuevo valor de y es: " <<y<<endl;
	
	return 0;
}
