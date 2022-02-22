#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

double factorial (int n);
float taylor (int n, float x);
float pot (float x);

int main() {
	int n;
	float x;
	cout << "Dada la funcion sen(x*pi)" <<endl;
	cout << "Introducir el valor de x:";
	cin >> x;
	cout << "Introducir el numero de terminos de la serie:";
	cin >> n;
	cout <<"El valor por la serie de Tylor es:" <<taylor(n,x);
	cout <<" El valor real de sen " <<x<< "*pi es:" <<pot(x);
	system ("pause");
}

float taylor (int n, float x){
	double t,s=0;
	float p=3.1416;
	for(int i=0; i<n; i++){
			t=pow(x*p,2*i+1)*pow(-1,i)/factorial (2*i+1);
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

float pot (float x){
	float t;
	float p=3.1416;
	t= sin(x*p);
	return t;
}
