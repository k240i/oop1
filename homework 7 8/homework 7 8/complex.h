#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
using namespace std;
class Complex{
private:
	double re = 0;
	double im = 0;
public:
	Complex() {}
	Complex(double re, double im){
		this->re = re;
		this->im = im;
	}
	Complex(const Complex& a){
		this->re = a.re;
		this->im = a.im;
	}
	~Complex() {}
	double Set_re();
	double Set_im();
	double Change_re(double x);
	double Change_im(double y);
	void Print_Complex();
	Complex Get_sum(Complex n1, Complex n2);
	Complex Get_dif(Complex n1, Complex n2);
	Complex Get_pro(Complex n1, Complex n2);
	Complex Get_rat(Complex n1, Complex n2);
	double Get_module(Complex x);
	Complex Max_complex(Complex x, Complex y);
	Complex operator +(const Complex& n2);
	Complex operator -(const Complex& n2);
	Complex operator *(const Complex& n2);
	Complex operator /(const Complex& n2);
	void operator =(const Complex& n2);
	bool operator >(const Complex& n2);
	bool operator <(const Complex& n2);
	bool operator >=(const Complex& n2);
	bool operator <=(const Complex& n2);
	bool operator !=(const Complex& n2);
	bool operator ==(const Complex& n2);
	friend ostream& operator <<(ostream& out, const Complex& n1);
	friend istream& operator >>(istream& in, Complex& n1);
};
#endif