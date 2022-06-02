#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
	cout << "����������� �� ��������� ������: " << this << endl;
}

Point::Point(int x, int y)
{
	{
		this->x = x;
		this->y = y;
	}
	cout << "����������� � �����������, ������: " << this << endl;
}

bool Point::operator==(const Point & other)
{
	return this->x == other.x && this->y == other.y;	
}

bool Point::operator!=(const Point & other)
{
	return !(this->x == other.x && this->y == other.y);
}
