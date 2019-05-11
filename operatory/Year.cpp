#include "Year.h"



Year::Year()
{
}
void Year::operator++()
{
	this->year++;

}
void Year::operator--()
{
	this->year--;
}
bool Year::operator==(const Year& obj)
{
	return (this->year == obj.year);
}
bool Year::operator<(const int a)
{
	return this->year<a;
}
bool Year::operator>(const int a)
{
	return year > a;
}
std::istream & operator>>(std::istream& input, Year& obj)
{
	input >> obj.year;
	return input;
}

std::ostream & operator<<(std::ostream& input, Year& obj)
{
	input << obj.year;
	return input;
}
Year::~Year()
{
}
