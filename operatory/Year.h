#pragma once
#include <istream>
class Year
{
public:
	int year;
	void operator++();
	void operator--();
	bool operator==(const Year& obj);
	bool operator <(const int);
	bool operator >(const int);
	friend std::istream & operator>>(std::istream&, Year&);
	friend std::ostream & operator<<(std::ostream&, Year&);
	Year();
	~Year();
};

