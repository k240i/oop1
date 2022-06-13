#include "vector.h"
using namespace std;
double Vector::Set_x(){
	cin >> x;
	return x;
}
double Vector::Set_y(){
	cin >> y;
	return y;
}
double Vector::Set_z(){
	cin >> z;
	return z;
}
double Vector::Change_x(double x1){
	return x = x1;
}
double Vector::Change_y(double y1){
	return y = y1;
}
double Vector::Change_z(double z1){
	return z = z1;
}
void Vector::Print_vector(Vector n){
	cout << "(" << n.x << "," << n.y << "," << n.z << ")";
}
double Vector::Get_module(Vector n){
	cout << "\n|";
	n.Print_vector(n);
	cout << "| = " << sqrt(x * x + y * y + z * z) << "\n";
	return sqrt(x * x + y * y + z * z);
}
double Vector::Get_scalar_product(Vector n1, Vector n2){
	cout << "\n";
	n1.Print_vector(n1);
	cout << " * ";
	n2.Print_vector(n2);
	cout << " = " << n1.x * n2.x + n1.y * n2.y + n1.z * n2.z << "\n";
	return n1.x * n2.x + n1.y * n2.y + n1.z * n2.z;
}
Vector Vector::Get_vector_product(Vector n1, Vector n2){
	Vector n3;
	double x1 = (n1.y * n2.z - n1.z * n2.y);
	n3.Change_x(x1);
	double y1 = (n1.z * n2.x - n1.x * n2.z);
	n3.Change_y(y1);
	double z1 = (n1.x * n2.y - n1.y * n2.x);
	n3.Change_z(z1);
	cout << "\n";
	n1.Print_vector(n1);
	cout << " x ";
	n2.Print_vector(n2);
	cout << " = ";
	n3.Print_vector(n3);
	cout << "\n";
	return n3;
}
Vector Vector::Get_sum(Vector n1, Vector n2){
	Vector n3;
	double x1 = (n1.x + n2.x);
	n3.Change_x(x1);
	double y1 = (n1.y + n2.y);
	n3.Change_y(y1);
	double z1 = (n1.z + n2.z);
	n3.Change_z(z1);
	n1.Print_vector(n1);
	cout << " + ";
	n2.Print_vector(n2);
	cout << " = ";
	n3.Print_vector(n3);
	cout << "\n";
	return n3;
}
Vector Vector::Get_dif(Vector n1, Vector n2){
	Vector n3;
	double x1 = (n1.x - n2.x);
	n3.Change_x(x1);
	double y1 = (n1.y - n2.y);
	n3.Change_y(y1);
	double z1 = (n1.z - n2.z);
	n3.Change_z(z1);
	n1.Print_vector(n1);
	cout << " - ";
	n2.Print_vector(n2);
	cout << " = ";
	n3.Print_vector(n3);
	cout << "\n";
	return n3;
}
Vector Vector::Get_mul_number(Vector n1, double n2){
	Vector n3;
	double x1 = (n1.x * n2);
	n3.Change_x(x1);
	double y1 = (n1.y * n2);
	n3.Change_y(y1);
	double z1 = (n1.z * n2);
	n3.Change_z(z1);
	n1.Print_vector(n1);
	cout << " * " << n2 << " = ";
	n3.Print_vector(n3);
	cout << "\n";
	return n3;
}