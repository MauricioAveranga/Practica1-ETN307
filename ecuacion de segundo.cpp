#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std; 
int main() {
	int a,b,c,u,x1,x2;
	cout << "Dada una ecuacion con el formato ax^2 + bx + c" <<endl;
	cout << "Introducir el valor de a:";
	cin >> a;
	cout << "Introducir el valor de b:";
	cin >> b;
	cout << "Introducir el valor de c:";
	cin >> c;
	u=b*b-4*a*c;
	if (u>=0) {
		x1=(-b+sqrt(u))/(2*a);
		x2=(-b-sqrt(u))/(2*a);
		cout<<"El resultado de la ecuacion es:" <<x1<< " y " <<x2<<endl;
			}
		else {
			cout<<"El resultado de la ecuacion es: imaginario"<<endl;
		}
	
}