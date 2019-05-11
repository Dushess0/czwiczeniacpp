#pragma once
#include <string>
#include "Year.h"
#include <istream>
class Student
{
public:
	int id;
	std::string first_name;
	std::string last_name;
	std::string program;

	Year year;
	Student();
	~Student();
	void operator++();
	void operator--();
	friend std::istream& operator>>(std::istream &input , Student&stud );
};

