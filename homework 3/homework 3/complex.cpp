#include "complex.h"
#include <iostream>
using namespace std;
Complex Complex::sum(Complex n)
{
	return Complex{ this->re + n.re, im + n.im };
}

Complex Complex::minus(Complex n)
{
	return Complex{ re - n.re, im - n.im };
}
Complex Complex::multiply(Complex n)
{
	return Complex{ re * n.re - im * n.im, re * n.im + n.re * im };
}
Complex Complex::divide(Complex n)
{
	return Complex{ (re * n.re + im * n.im) / (n.re * n.re + n.im * n.im), (im * n.re - re * n.im) / (n.re * n.re + n.im * n.im) };
}
double Complex::abs()
{
	return { sqrt(re * re + im * im) };
}
void Complex::printComplex()
{
	cout << this->re;

	if (this->im != 0) {
		if (this->im > 0) {
			cout << "+";
		}
		cout << this->im << "i\n";
	}
}