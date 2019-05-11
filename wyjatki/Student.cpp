#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
}
void Student::operator++()
{
	++year;
}
void Student::operator--()
{
	--year;
}
bool Student::check_Name(std::string name)
{
	if (isupper(name[0]))
	{
		for (int i = 1; i < name.length(); i++)
		{
			if (isupper(name[i])) return false;
		}
		return true;
	}
	return false;
}
istream& operator>>(istream &input, Student&stud) {

	
	
	input >> stud.id;
	
	input >> stud.first_name;
	
	input >> stud.last_name;
	
	
	input >> stud.program;
	
	input >> stud.year;
	
	if (stud.first_name == "") throw 1;
	if (!stud.check_Name(stud.first_name)) throw 2;
     
	if (stud.last_name == "") throw 3;
	if (!stud.check_Name(stud.last_name)) throw 4;
	if ((stud.year > 100) || (stud.year < 10)) throw 5;
	if ((stud.program != "informatyka") && (stud.program != "ekonomia") && (stud.program != "matematyka") && (stud.program != "fizyka") && (stud.program != "filozofia"))
	{
		throw 6;
	}

	


	return input;
}

Student::~Student()
{
}
