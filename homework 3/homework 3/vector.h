#ifndef Vector_H
#define Vector_H
#include <iostream>
using namespace std;
class Vector
{
private:
	double x = 0;
	double y = 0;
	double z = 0;
public:
	Vector(){}
	Vector(double x, double y, double z){
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vector(const Vector& a){
		this->x = a.x;
		this->y = a.y;
		this->z = a.z;
	}
	~Vector(){}
	double Set_x();
	double Set_y();
	double Set_z();
	double Get_module(Vector n);
	double Get_scalar_product(Vector n1, Vector n2);
	double Change_x(double x1);
	double Change_y(double y1);
	double Change_z(double z1);
	Vector Get_vector_product(Vector n1, Vector n2);
	void Print_vector(Vector n);
	Vector Get_sum(Vector n1, Vector n2);
	Vector Get_dif(Vector n1, Vector n2);
	Vector Get_mul_number(Vector n1, double n2);
};
#endif