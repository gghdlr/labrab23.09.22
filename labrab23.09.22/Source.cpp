// ConsoleApplication4.cpp: ���������� ����� ����� ��� ����������� ����������.
#include <iostream>
#include <Windows.h>
#define sum(y, y1) (y + y1)
using std::cout;
using std::endl;
int num(int y, int y1) {
	setlocale(LC_ALL, "");
	static int x = 13;
	x = y;
	cout << "�� Source.cpp" << "\n";
	int z = x + y;
	cout << "����� ����������� ����� � ����������� ����������: " << z << "\n";
	x = y;
	int k = sum(y, y1);
	cout << "����� ���� ����������(������): " << k << "\n";
	return z, k;
}