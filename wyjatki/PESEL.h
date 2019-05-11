#pragma once
#include <iostream>
#include <string>
class PESEL
{
public:
	PESEL(std::string pesel);

	bool validate_pesel( const std::string pesel);
	int id;

	~PESEL();
};

