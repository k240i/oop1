#include <iostream>
#include <string>
#include <ctime>
void sort(int* arr, size_t size, bool(*cmp_func)(int*, int*)) {
	int i = 1;
	int j = 2;
	while (i < size-1) {
		if (cmp_func(arr + i - 1, arr + i)) {
			i = j;
			j++;
		}
		else {
			std::swap(arr[i-1], arr[i]);
			i--;
			if (i == 0) {
				i = j;
				j++;
			}
		}
	}
}
bool cmp_greater(int* n1, int* n2) { return *n1 > *n2; }
bool cmp_less(int* n1, int* n2) { return *n1 < *n2; }
void sort_greaterequal(int* arr, size_t size) {
	sort(arr, size, cmp_less);
}
void sort_lessequal(int* arr, size_t size) {
	sort(arr, size, cmp_greater);
}
void reverse(int* arr, size_t size) {
	int* arrc = new int[size];
	if (!arrc) { exit(-1); }
	for (int i = 0; i < size; ++i) {
		arrc[i] = arr[size - i - 1];
	}
	memcpy_s(arr, size, arrc, size);
	delete[] arrc;
}
int arr_sum(int* arr, size_t size) {
	int s = 0;
	for (int i = 0; i < size; ++i) {
		s += arr[i];
	}
	return s;
}
void (*get_fun(int elem, int sum))(int*, size_t) {
	if (sum == elem) {
		return reverse;
	}
	if (sum > elem) {
		return sort_greaterequal;
	}
	if (sum < elem) {
		return sort_lessequal;
	}
}
int main() {
	srand(time(nullptr));
	const int size = 20;
	void (*sort_func)(int*, rsize_t);
	int* arr = new int[size];
	if (!arr){
		return -1;
	}
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 21 - 10;
	}
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << ' ';
	}
	putchar('\n');
	int s = arr_sum(arr, size);
	std::cout << "Sum of elements: " << s << '\n';
	sort_func = get_fun(arr[0], s);
	sort_func(arr, size);
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << ' ';
	}
	putchar('\n');
	delete[] arr;
	return 0;
}