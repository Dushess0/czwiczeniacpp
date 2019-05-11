#include "Umowa.h"



Umowa::Umowa(double pensja)
{
	this->wynagrodzenie_brutto = pensja;
}
Umowa::Umowa()
{
	
}
double Umowa::pobierzBrutto()
{
	return this->wynagrodzenie_brutto;
	
}

double Umowa::pobierzNetto()
{
	return this->wynagrodzenie_brutto*0.8;
}


Umowa::~Umowa()
{
}
