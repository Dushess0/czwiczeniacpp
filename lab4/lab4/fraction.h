#pragma once
#include <iostream>
class fraction
{
public:
	int mianownik, licznik;
	fraction();
	fraction(int licznik, int mianownik);
	
	void setLicznik(int x);
	int GetLicznik();
	void setMianownik(int y);
	int GetMianownik();
	void print();


	~fraction();
};

