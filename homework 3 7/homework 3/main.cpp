#include "vector.h"
#include "circle.h"

int main(){
	setlocale(LC_ALL, "rus");
	int i = 0;
	Vector a1;
	Vector a2;
	Circle b;
	Circle d;
here:
	cout << "Выбирете объект:\n1 - вектор\n2 - круг\n\nИли введите 0, чтобы выйти из программы\n\n";
	cin >> i;
	if (i == 1){
		cout << "\nВведите x координату вектора\n";
		a2.Set_x();
		cout << "\nВведите y координату вектора\n";
		a2.Set_y();
		cout << "\nВведите z координату вектора\n";
		a2.Set_z();
		cout << "\nВведите x координату второго вектора\n";
		a1.Set_x();
		cout << "\nВведите y координату второго вектора\n";
		a1.Set_y();
		cout << "\nВведите z координату второго вектора\n";
		a1.Set_z();
	it:
		cout << "\nВыберите действие:\n0 - выйти из программы\n1 - найти модуль вектора\n2 - найти скалярное произведение\n3 - найти векторное произведение\n4 - найти сумму векторов\n5 - найти разность векторов\n6 - найти умножение вектора на число\n\n";
		cin >> i;
		if (i == 1){
		th:
			cout << "\nМодуль какого вектора найти? (1 или 2)\n";
			int k = 0;
			cin >> k;
			if (k == 1){
				a2.Get_module(a2);
			}
			else if (k == 2){
				a1.Get_module(a1);
			}
			else{
				cout << "Введите 1 или 2";
				goto th;
			}
			goto it;
		}
		else if (i == 2){
			a2.Get_scalar_product(a1, a2);
			goto it;
		}
		else if (i == 3){
			a1.Get_vector_product(a1, a2);
			goto it;
		}
		else if (i == 4){
			a1.Get_sum(a1, a2);
			goto it;
		}
		else if (i == 5){
			a1.Get_dif(a1, a2);
			goto it;
		}
		else if (i == 6){
		ht:
			cout << "\nВведите число\n";
			double nubmer = 0;
			cin >> nubmer;
			cout << "\nКакой вектор умножить на число? (1 или 2)\n";
			int k = 0;
			cin >> k;
			if (k == 1){
				a2.Get_mul_number(a2, nubmer);
			}
			else if (k == 2){
				a1.Get_mul_number(a1, nubmer);
			}
			else{
				cout << "Введите 1 или 2";
				goto ht;
			}
			goto it;
		}
		else if (i == 0){
			return 0;
		}
		else{
			cout << "Введите 1, 2, 3, 4, 5, 6 или 0";
			goto it;
		}
	}
	else if (i == 2){
		cout << "\nВведите радиус круга\n\n";
		b.Set_r();
	there:
		cout << "\nВыберите действие:\n0 - выйти из программы\n1 - вывести параметры круга\n\n";
		cin >> i;
		if (i == 1){
			b.Print_parametres();
			goto there;
		}
		else if (i == 0){
			return 0;
		}
		else{
			cout << "Введите 1 или 0";
			goto there;
		}
	}
	else if (i == 0){
		return 0;
	}
	else{
		cout << "\nВведите 1 или 2\n\n";
		goto here;
	}
}