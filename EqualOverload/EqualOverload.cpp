#include <iostream>
#include "Point.h";
#include <string.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	Point a(77, 3);
	Point b(77, 3);

	bool result = a == b; //� ���������� result ���������� �������� ��������� ���������� ==
	cout << "������� �����: " << result << endl;
	bool result1 = a != b; //� ���������� result ���������� �������� ��������� ���������� !=
	cout << "������� �� �����: " << result1 << endl;
}

