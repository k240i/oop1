#include "circle.h"
using namespace std;
double Circle::Set_r(){
here:
	cin >> r;
	if (r < 0){
		cout << "\n¬ведите число >= 0\n";
		goto here;
	}
	return r;
}

void Circle::Print_parametres(){
	const double PI = 3.14;
	cout << "\nD = " << 2 * r << "\n";
	cout << "\nL = " << 2 * PI * r << "\n";
	cout << "\nS = " << PI * r * r << "\n";
}

double Circle::Get_diameter(){
	return 2 * r;
}

double Circle::Get_circumference_length(){
	const double PI = 3.14;
	return 2 * PI * r;
}

double Circle::Get_area(){
	const double PI = 3.14;
	return PI * r * r;
}