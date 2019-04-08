#pragma once
#include "rodzic.h"

class Children :public rodzic
{

private:
	friend class rodzic;
	string school;
	rodzic parent;
public:
	
	Children();
	~Children();
	Children(int age, string name, string surname,rodzic& parent);
	string Get_School();
	
};

