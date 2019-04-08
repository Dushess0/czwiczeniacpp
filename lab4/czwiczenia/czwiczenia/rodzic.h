#pragma once
#include <iostream>
#include <string>

class Children;
using namespace std;
class rodzic
{

public:
	int age;
	string Name;
	string Surname;
	


	rodzic();
	rodzic(int age, string name, string surname);
	~rodzic();
	void set_new_school(Children& ch, string SchoolName);
};

