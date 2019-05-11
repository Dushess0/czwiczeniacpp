#include <string>
#include <list>
#include <iostream>
#include "PESEL.h"
#include "Student.h"
using namespace std;


int main()
{
	
	string pes;

	cin >> pes;

	PESEL a=PESEL(pes);
	
	Student stud = Student();
	try
	{
		cin >> stud;
		cout << "OK" << endl;
	}
	catch (int e)
	{
		if (e == 1) cout << "No name" << endl;
		if (e == 2) cout << "First name is wrong" << endl;
		if (e == 3) cout << "No last name" << endl;
		if (e == 4) cout << "Last name is wrong" << endl;
		if (e == 5) cout << "year is wrong" << endl;
		if (e == 6) cout << "Field of study is wrong" << endl;
		
	}



	

	


	system("pause");
	
}