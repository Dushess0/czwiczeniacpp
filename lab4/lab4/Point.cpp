//Definicja znajduje siê w pliku Point.cpp
#include <cmath>
#include <ostream>
#include <iostream>
#include "Point.h"

using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;
using std::cout;

/* Aby wskazaæ, ze definicja funkcji dotyczy metody danej klasy
  stosujemy tzw. operator zasiêgu - "::"
*/

//Specjalna inicjalizacja zmiennych. Zmienne s¹ inicjowane
//nim zostanie wywo³ane cia³o konstruktora
Point::Point() :x_(0), y_(0) {
	
}

Point::Point(double x, double y) {
	
	x_ = x;
	y_ = y;
}

Point::~Point() {
	
	cout << endl;
}
double Point::GetX() const
{
	return this->x_;
}
double Point::GetY() const
{
	return this->y_;
}
void Point::SetX(double x)
{
	this->x_ = x;
}
void Point::SetY(double y)
{
	this->y_ = y;
}
double Point::Distance(const Point &other) const {
	return sqrt(pow(GetX() - other.GetX(), 2) + pow(GetY() - other.GetY(), 2));
}

void Point::ToString(ostream *out) const {
	(*out) << "(" << GetX() << ";" << GetY() << ")";
}
void Point::SET(double x, double y)
{
	this->SetX(x);
	this->SetY(y);
}