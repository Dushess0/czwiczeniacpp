#include "Circle.h"



Circle::Circle()
{
}
Circle::Circle(double x, double y, double r)
{
	this->x = x;
	this->y = y;
	this->r = r;

}


double Circle::area()
{
	return r * r*3.14;
}





Circle::~Circle()
{
}
