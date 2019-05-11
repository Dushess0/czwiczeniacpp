#include <string>
#include <list>
#include <iostream>

#include "Student.h"
using namespace std;


int main()
{
	
	Student stud = Student();
	try
	{
		cin >> stud;
		cout << "OK" << endl;
	}
	catch (int e)
	{
		if (e == 1) cout << "No first name" << endl;
		if (e == 2) cout << "No last name" << endl;
		if (e == 3) cout << "year is wrong" << endl;
		if (e == 4) cout << "Field of study is wrong" << endl;
		
	}

	cout << "First Name: "<<stud.first_name << endl;
	cout << "Last Name: " << stud.last_name << endl;
	cout << "ID: " << stud.id << endl;
	cout << "Years old" << stud.year << endl;
	cout << "Field of study" << stud.program << endl;

	

	


	system("pause");
	
}