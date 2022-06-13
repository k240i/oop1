#include "complex.h"
using namespace std;
bool Complex::operator >(const Complex& n2){
	if (sqrt(this->re * this->re + this->im * this->im) > sqrt(n2.re * n2.re + n2.im * n2.im)){
		return 1;
	}
	else{
		return 0;
	}
}
void Complex::Print_Complex(){
	if (im == 0){
		cout << re;
	}
	else if (re == 0){
		cout << im << "i";
	}
	else if (im < 0){
		cout << re << " - " << im * (-1) << "i";
	}
	else if (im == 1){
		cout << re << " + " << "i";
	}
	else{
		cout << re << " + " << im << "i";
	}
}
double Complex::Change_re(double x){
	return  re = x;
}
double Complex::Change_im(double y){
	return  im = y;
}