#ifndef PROJECTNAME_PATH_POINT_H_
#define PROJECTNAME_PATH_POINT_H_
#include <ostream>

class Point {
public:
	//Konstruktor bezparametrowy
	Point();
	//Konstruktor parametrowy
	Point(double x, double y);
	//Destruktor wykonywany przed zwolnieniem pami�ci
	~Point();

	//Metody nie modyfikuj�ce stanu obiektu (const na ko�cu metody)
	//nie mog� zmodyfikowa� tego obiektu.
	void ToString(std::ostream *out) const;
	double Distance(const Point &other) const;


	//metody akcesor�w s� publiczne i tylko w przy ich pomocy
	//mo�na si� dosta� z zewn�trz do p�l klasy
	double GetX() const;
	double GetY() const;

	//metody seter�w pozwalaj�ce zmieni� stan obiektu 
	//po jego zainicjalizowaniu
	void SetX(double x);
	void SetY(double y);

	void SET(double x,double y);
private:
	//w przeciwienstwie do pythona C++ wymaga jawnej deklaracji sk�adowych p�l klasy:
	double x_, y_;
};

#endif  // PROJECTNAME_PATH_POINT_H