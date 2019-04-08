#include "Children.h"



Children::Children()
{
}
Children::Children(int age, string name, string surname,rodzic& parent)
{
	this->age = age;
	this->Name = name;
	this->Surname = surname;
	this->parent = parent;
	
}
string Children::Get_School()
{
	return this->school;
}
Children::~Children()
{
}
