#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

double factorial (int n);
double taylor (int n, int x);
float pot (float e, int x);

int main() {
	int x,n,e;
	cout << "Dada una funcion igual a e^x" <<endl;
	cout << "Introducir el valor de x:";
	cin >> x;
	cout << "Introducir el numero de terminos de la serie:";
	cin >> n;
	cout <<"El valor por la serie de Tylor es:" <<taylor(n,x);
	cout <<" El valor real de e^" <<x<< " es:" <<pot(e,x);
	system ("pause");
}

double taylor (int n, int x){
	double t,s=0;
	for(int i=0; i<n; i++){
			t=pow(x,i)/factorial (i);
			s+=t;
	}
	return s;
}
	
double factorial(int n){
	double fac=1;
	for(int i=2;i<=n;i++) {
			fac*=i;
	}
	return fac;
}

float pot (float e, int x){
	float t;
	e=2.7182;
	t= pow(e,x);
	return t;
}
