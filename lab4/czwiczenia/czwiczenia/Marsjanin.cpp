#include "Marsjanin.h"

#include <iostream>
int Marsjanin::friends = 0;
Marsjanin::Marsjanin()
{
	
	friends++;

}

void Marsjanin::attack()
{
	if (this->friends > 5)
	{
		std::cout << "Attacking" << std::endl;
	}
	else
	{
		std::cout << "Hide" << std::endl;
	}
}
Marsjanin::~Marsjanin()
{
	friends--;

}
