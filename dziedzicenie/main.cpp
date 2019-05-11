#include <iostream>
using namespace std;
#include <iostream>
#include "Circle.h"
#include "Sphere.h"
#include "Pracownik.h"
#include "UmowaDzielo.h"
#include "UmowaPraca.h"
int main()
{
	Circle Kolo(2, 2, 5);  
	Sphere Kula(2, 2, 8, 5);
	cout << Kolo.area() << endl;
	cout << Kula.area() << endl;

	cout<<static_cast<Circle>(Kula).area()<<endl;   //zadanie 5

	Circle* vir_test;
	Sphere derived(2,2,2,10);
	cout << derived.area() << endl;
	vir_test = &derived;    
	cout << vir_test->area()<<endl;  //zadanie 6


	Umowa um1(1000);
	UmowaDzielo* um2= new UmowaDzielo(1000);
	UmowaPraca* um3= new UmowaPraca(1000);
	Pracownik prac("imie", "nazwisko", "hydraulik", um2);
	
	um2 = static_cast<UmowaDzielo*>(&um1);
	prac.umowa = um2;
	cout << prac.pobirezPensje()<<endl;


	system("pause");
	return 0;
}