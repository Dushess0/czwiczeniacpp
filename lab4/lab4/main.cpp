#include <iostream>
#include "fraction.h"
#include "Point.h"
#include "Square.h"
#include "SImpleURL.h"
#include <optional>
#include "Name.h"
using namespace model;

using namespace  std;

void set_point(Point& A)
{
	double x, y;
	cin >> x;
	cin >> y;

	A.SET(x, y);
	A.ToString(&cout);
}


int main()
{    
	
	
	//ulamek
	fraction ulamek = fraction(5, 10);
	int x, y;
	ulamek.print();                
	cin >> x;
	ulamek.setLicznik(x);
	cin >> y;
	ulamek.setMianownik(y);
	ulamek.print();



	//pole i obwod prostokatu
	Point A, B, C, D;
	
	set_point(A);
	set_point(B);
	set_point(C);
	set_point(D);                         
	Square mysq = Square(A,B,C,D);

	cout <<"Area="<< mysq.Area()<<endl;
	cout << "Circumference"<<mysq.Circumference() << endl;

	//URL
	SImpleURL myURL = SImpleURL("http://www.foo.bar/simple-path?arguments=123#section-2");
	cout <<"Login:"<< myURL.Login() << endl;
	cout << "Host:" << myURL.Host() << endl;
	cout<< "Scheme:" << myURL.Scheme()<<endl;
	cout << "Path:" << myURL.Path() << endl;
	cout << "Query:" << myURL.Query() << endl;
	cout << "Fragment:" <<  myURL.Fragment() << endl;
	cout << "Port:" << myURL.Port() << endl;


	Name newName = Name("Illia Sergijowicz Bannitsyn");
	cout << "FirstName: " <<newName.FirstName() << endl;
	cout << "SecondName: " << newName.SecondName() << endl;
	cout << "ThirdName: " << newName.ThirdName() << endl;
	cout << "Surname: " << newName.Surname() << endl;
	cout << "Full Initials: " << newName.ToFullInitials() << endl;
	cout << "First name Initials: " << newName.ToFirstNamesInitials() << endl;
	cout << "ToSurnameNames: " << newName.ToSurnameNames() << endl;
	cout << "ToNamesSurname: " << newName.ToNamesSurname() << endl;
	



	system("pause");
}
