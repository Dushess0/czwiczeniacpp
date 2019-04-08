#include "rodzic.h"
#include "Children.h"


rodzic::rodzic()
{
}
void rodzic::set_new_school(Children& ch, string NewSchool)
{
	if ((this->Surname == ch.parent.Surname) && (this->Name == ch.parent.Name))
		ch.school = NewSchool;
	else
		cout << "I am not parent of this child" << endl;
}
rodzic::rodzic(int age, string name, string surname)
{   
	this->age = age;
	this->Name = name;
	this->Surname = surname;
	
}
rodzic::~rodzic()
{
}
