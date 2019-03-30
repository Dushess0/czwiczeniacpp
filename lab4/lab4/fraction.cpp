#include "fraction.h"



fraction::fraction()
{
	
}

fraction::fraction(int x, int y)
{
	licznik = x;
	mianownik = y;
}

int fraction::GetLicznik()
{
	return this->licznik;
}
int fraction::GetMianownik()
{
	return mianownik;
}

void fraction::setLicznik(int x)
{
	licznik = x;
}
void fraction::setMianownik(int y)
{
	if (y!= 0)
		this->mianownik = y;
	else
		std::cout << "cannot divide by 0" << std::endl;
}
void fraction::print()
{
	std::cout << this->licznik << "/" << this->mianownik << std::endl;
}