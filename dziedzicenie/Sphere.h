#pragma once
#include "Circle.h"
class Sphere :
	public Circle
{
public:
	double z;
	double area();
	
	Sphere(double x, double y, double z, double r);
	Sphere();
	~Sphere();
};

