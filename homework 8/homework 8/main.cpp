#include <iostream>
#include<string>
#include "Student.h"
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	Student a1, b1;
	cin >> a1;
	cout << a1 << endl;
	b1 = a1;
	cout << b1;
	return 0;
}