#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

struct Complex {
	
	double re = 0;
	double im = 0;

	Complex sum(Complex n);
	Complex minus(Complex n);
	Complex multiply(Complex n);
	Complex divide(Complex n);
	void printComplex();
	double abs();
	
};
#endif