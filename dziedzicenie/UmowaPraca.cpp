#include "UmowaPraca.h"



UmowaPraca::UmowaPraca(double pensja)
{
	this->wynagrodzenie_brutto = pensja;
}
double UmowaPraca::pobierzNetto()
{
	return this->wynagrodzenie_brutto*0.5;
}

UmowaPraca::~UmowaPraca()
{
}
