#include "student.h"
std::istream& operator >> (std::istream& in, Student& a) {
	setlocale(LC_ALL, "rus");
	std::cout << "Input your student's  surname, name, course and group:" << std::endl; //ïåðåãðóæ. îïåðàòîð ââîäà
	in >> a.surname >> a.name >> a.course >> a.group;
	return in;
}
std::ostream& operator <<(std::ostream& os, Student& a) {
	os << a.surname << " " << a.name << " course: " << a.course << "" << " group: " << a.group << std::endl;  //ïåðåãðóæ. îïåðàòîð âûâîäà
	return os;
}