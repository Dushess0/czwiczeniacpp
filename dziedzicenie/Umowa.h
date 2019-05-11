#pragma once
class Umowa
{
public:
	Umowa(double pensja);
	Umowa();
	double wynagrodzenie_brutto;
	virtual double pobierzNetto();
	double pobierzBrutto();
	~Umowa();
};

