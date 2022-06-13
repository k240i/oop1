#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
class Student {
public:
	friend std::istream& operator >> (std::istream& in, Student& a);
	friend std::ostream& operator << (std::ostream& os, Student& a);
	Student& operator = (const Student& a) {
		surname = a.surname;
		name = a.name;
		course = a.course;
		group = a.group;
		std::cout << " " << std::endl;
		return *this;
	}
private:
	std::string name, surname;
	std::string group;
	int course;
};
#endif 