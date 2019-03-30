#ifndef PROJECTNAME_PATH_POINT_H_
#define PROJECTNAME_PATH_POINT_H_
#include <ostream>

class Point {
public:
	//Konstruktor bezparametrowy
	Point();
	//Konstruktor parametrowy
	Point(double x, double y);
	//Destruktor wykonywany przed zwolnieniem pamiêci
	~Point();

	//Metody nie modyfikuj¹ce stanu obiektu (const na koñcu metody)
	//nie mog¹ zmodyfikowaæ tego obiektu.
	void ToString(std::ostream *out) const;
	double Distance(const Point &other) const;


	//metody akcesorów s¹ publiczne i tylko w przy ich pomocy
	//mo¿na siê dostaæ z zewn¹trz do pól klasy
	double GetX() const;
	double GetY() const;

	//metody seterów pozwalaj¹ce zmieniæ stan obiektu 
	//po jego zainicjalizowaniu
	void SetX(double x);
	void SetY(double y);

	void SET(double x,double y);
private:
	//w przeciwienstwie do pythona C++ wymaga jawnej deklaracji sk³adowych pól klasy:
	double x_, y_;
};

#endif  // PROJECTNAME_PATH_POINT_H