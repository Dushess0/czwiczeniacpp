#include "UmowaDzielo.h"



UmowaDzielo::UmowaDzielo(double pensja)
{
	this->wynagrodzenie_brutto = pensja;
}
double UmowaDzielo::pobierzNetto()
{
	return this->wynagrodzenie_brutto*0.4;
}

UmowaDzielo::~UmowaDzielo()
{
}
