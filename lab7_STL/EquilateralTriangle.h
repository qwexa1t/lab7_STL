#pragma once
#include "Figure.h"
#include "Triangle.h"
#include <string>
using namespace std;

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(); // онструктор без параметров
	EquilateralTriangle(int side) :Triangle(side) {}; //¬ конструкторе производного класса с параметрами вызов конструктора базового класса
	~EquilateralTriangle(); //ƒеструктор
	void set(); //прототипы методов
	void print();
	float area() const;
	EquilateralTriangle& operator = (const EquilateralTriangle& equilateraltriangle); //ѕерегрузка оператора присваивани€
	friend ostream& operator << (ostream& out, const EquilateralTriangle& equilateraltriangle); //ѕерегрузка оператора << дл€ замены метода Print()
};