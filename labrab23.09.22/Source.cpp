// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
#include <iostream>
#include <Windows.h>
#define sum(y, y1) (y + y1)
using std::cout;
using std::endl;
int num(int y, int y1) {
	setlocale(LC_ALL, "");
	static int x = 13;
	x = y;
	cout << "Из Source.cpp" << "\n";
	int z = x + y;
	cout << "Сумма переданного числа и статической переменной: " << z << "\n";
	x = y;
	int k = sum(y, y1);
	cout << "Сумма двух переданных(макрос): " << k << "\n";
	return z, k;
}