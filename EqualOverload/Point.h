#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	Point();
	Point(int x, int y);
	
	bool operator == (const Point & other);//��������� ������ �� ������������ ������ ������
	bool operator != (const Point & other);//��������� ������ �� ������������ ������ ������
};

