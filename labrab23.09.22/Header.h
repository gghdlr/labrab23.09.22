// ConsoleApplication4.cpp: ���������� ����� ����� ��� ����������� ����������.
#include <iostream>
#include <Windows.h>
#define sum(y, y1) (y + y1)
using std::cout;
using std::endl;
int num1(int y, int y1) {
	setlocale(LC_ALL, "");
	static int x = 0;
	x = y;
	cout << "�� Header.h" << "\n";
	int z = x + y;
	cout << "����� ����������� ����� � ����������� ����������: " << z << "\n";
	x = y;
	int k = sum(y, y1);
	cout << "����� ���� ����������(������): " << k;
	return z, k;
}
