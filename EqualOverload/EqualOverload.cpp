#include <iostream>
#include "Point.h";
#include <string.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	Point a(77, 3);
	Point b(77, 3);

	bool result = a == b; //в переменную result передается значение сравнения оператором ==
	cout << "Объекты равны: " << result << endl;
	bool result1 = a != b; //в переменную result передается значение сравнения оператором !=
	cout << "Объекты НЕ равны: " << result1 << endl;
}

