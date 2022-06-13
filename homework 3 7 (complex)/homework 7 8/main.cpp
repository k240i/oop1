#include "complex.h"
int main(){
	setlocale(LC_ALL, "rus");
	Complex a;
	Complex b;
	Complex c;
	int answer = 0;
	int i = 0;
	cout << "\nКалькулятор комплексных чисел\n";
	cout << "\nВведите первое число\n\n";
	cin >> a;
	cout << "\nВведите второе число\n\n";
	cin >> b;
here:
	cout << "\n\nВведите '1', чтобы сложить числа";
	cout << "\nВведите '2', чтобы вычесть из первого числа второе";
	cout << "\nВведите '3', чтобы перемножить числа";
	cout << "\nВведите '4', чтобы разделить первое число на второе";
	cout << "\nВведите '5', чтобы найти модуль числа";
	cout << "\nВведите '6', чтобы сравнить числа\n";
	cout << "\nВведите '0', чтобы выйти из программы\n\n";
	cin >> answer;
	cout << "\n";
	switch (answer){
	case 0:
		break;
	case 1:
		cout << "(" << a << ") + (" << b << ") = " << a + b;
		goto go_on;
	case 2:
		cout << "(" << a << ") + (" << b << ") = " << a - b;
		goto go_on;
	case 3:
		cout << "(" << a << ") + (" << b << ") = " << a * b;
		goto go_on;
	case 4:
		cout << "(" << a << ") + (" << b << ") = " << a / b;
		goto go_on;
	case 5:
		cout << "Модуль какого числа необходимо вычислить? (1 или 2)\n";
	there:
		cin >> i;
		switch (i){
		case 1:
			a.Get_module(a);
			goto here;
		case 2:
			b.Get_module(b);
			goto here;
		default:
			cout << "Введите '1','2','3','4' или '0'\n";
			goto there;
		}
	case 6:
		if (a > b){
			cout << "|" << a << "| > |" << b << "|";
		}
		else if (a == b){
			cout << "|" << a << "| = |" << b << "|";
		}
		else{
			cout << "|" << b << "| > |" << a << "|";
		}
		goto here;
	default:
		cout << "Введите '1','2','3','4' или '0'\n";
		goto here;
	go_on:
		cout << "\n\nПродолжить работу с числом? (1 - да, 0 - нет)\n";
		cin >> i;
		switch (i){
		case 0:
			goto here;
		case 1:
			cout << "\nВведите новое число\n\n";
			cin >> b;
			goto here;
		default:
			cout << "\nВведите 0 или 1\n";
			goto go_on;
		}
	}
}