
#include <iostream>
#include "rodzic.h"
#include "Children.h"
#include "Matrix.h"
#include "Marsjanin.h"
#include <list>
using namespace std;




int main()
{
	// zadanie 4

	rodzic parent(40, "Name", "Surname");    
	rodzic unknown(18, "???", "???");
	Children Bob(5, "Bob", "Surname",parent);

	cout << "Current school of "<<Bob.Name<<" is "<<Bob.Get_School() <<endl;
	cout << "Enter new school" << endl;
	string newSchool;
	cin >> newSchool;
	unknown.set_new_school(Bob, newSchool);
	parent.set_new_school(Bob, newSchool);
	cout << "Current school of " << Bob.Name << " is " << Bob.Get_School() << endl;



	
	//zadanie 6

	Matrix m1("[1i5 2 3i-2; 4 5i-10 6]"); //przyjmuje w formacie matlaba    
	Matrix m2 = ("[1i5 -4 0; 2 5i4 -3]");  
	Matrix m3 = ("[1 2; 3 4; 5 6]");
	Matrix m_copy=m3;   // kopijowanie macierzy

	m1.print();
	m2.print();

	Matrix result = m1.sub(m2); //odejmowanie

	result.print(); // wypisywanie w formacie matlaba
	Matrix result2 = result.add(m2); //dodawanie
	result2.print();


	//zadanie 5
	list<Marsjanin*> all;
	all.push_back(new Marsjanin());
	bool condition = true;
	while (condition)
	{
		cout << "Number of marsians: " << Marsjanin::friends << endl;
		cout << "Enter number to add or remove marsians" << endl;
		int tmp;
		cin >> tmp;
		for (int i = 0; i < -1 * tmp; i++)
		{
			if (Marsjanin::friends > 1)

			{
				delete all.back();
				all.resize(all.size() - 1);
			}
			else
			{
				
				condition = false;
			}
			

		}
		for (int i = 0; i<tmp; i++)
		{
			
				all.push_back(new Marsjanin());

			
		}
		if (condition)
			for (Marsjanin* m : all)
			{

				m->attack();
			}
		else
			cout << "All marsians are dead" << endl;

	}

	
	




	system("pause");
	
}