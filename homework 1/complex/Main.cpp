#include "complex.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    Complex num1, num2, num;
    num = { 0, 0 };
    num1 = { 1, 7 };
    num2 = { 3, 6 };
    cout << "first number: ";
    num1.printComplex();
    cout << ", second number: ";
    num2.printComplex();
    cout << endl<<endl;
    Complex
        num_plus = num.sum(num1).sum(num2),
        num_minus = num.sum(num1).minus(num2),
        num_multiply = num.sum(num1).multiply(num2),
        num_divide = num.sum(num1).divide(num2);
    cout << "plus: ";
    num_plus.printComplex();
    cout << endl;
    cout << "minus: ";
    num_minus.printComplex();
    cout << endl;
    cout << "multiply: ";
    num_multiply.printComplex();
    cout << endl;
    cout << "divide: ";
    num_divide.printComplex();
    cout << endl;

    ifstream file("complex.txt");
    int n=0,count=0;
    file >> n;
    Complex* p = new Complex[n]{};
    Complex max_v{};
    for (int i =0; i < n && !file.eof(); ++i) {
        file >> p[i].re >> p[i].im;
        if (p[i].abs() > max_v.abs()) {
            max_v = p[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        //p[i].printComplex();
        count += 1;
    }
    cout << "n=" << count << endl;
    cout << "The biggest abs is " << max_v.abs() << endl;
    max_v.printComplex();
    return 0;
}
