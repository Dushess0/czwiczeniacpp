#include "PESEL.h"



PESEL::PESEL(std::string pesel)
{
	try { validate_pesel(pesel); }
	catch (int e)
	{
		if (e == 2) { std::cout << "lenght is too short" << std::endl; }
		else if (e == 4) { std::cout << "the lenght is too big" << std::endl; }
		else if (e == 0) { std::cout << "Control sum is wrong" << std::endl; }
	}
}
bool PESEL::validate_pesel(const std::string pesel)
{
	int p = 0,control=0;
	int pes[11];
	while (pesel[p])
	{
		pes[p] = pesel[p] - '0';
		p++;
	}
	control = 9 * pes[0] + 7 * pes[1] + 3 * pes[2] + pes[3] + 9 * pes[4] + 7 * pes[5] + 3 * pes[6] + pes[7] + 9 * pes[8] + 7 * pes[9];
	if (control % 10 == pes[10])
	{
		return true;
	}
	else
	{
		throw 0;
	}
	if (p <11) throw 2;
	if (p > 11) throw 4;
}

PESEL::~PESEL()
{
}
