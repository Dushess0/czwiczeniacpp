#include "Square.h"
#include "Point.h"


Square::Square()
{
}

Square::Square(Point& A, Point& B, Point &C, Point &D)
{
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;

}
Square::~Square()
{
}

double Square::Area()
{   
	double width = this->A.Distance(this->D);
	double height = this->A.Distance(this->B);

	return width*height;
}
double Square::Circumference()
{
	double AB, BC, CD, AD;
	AB = A.Distance(B);
	BC = B.Distance(C);
	CD = C.Distance(D);
	AD = A.Distance(D);
	return AD + CD + BC + AB;

}


