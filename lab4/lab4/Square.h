#pragma once
#include "Point.h"
class Square
{
public:

	Point A, B, C, D;

	Square();
	
	Square(Point &A, Point& B, Point &C, Point& D);
	double Circumference();
	double Area();

	~Square();
    
};

