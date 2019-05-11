#include "Sphere.h"



Sphere::Sphere(double x, double y, double z,double r)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->r = r;
}


double Sphere::area()
{
	return 4*r*r*3.14;
}
Sphere::~Sphere()
{
}
