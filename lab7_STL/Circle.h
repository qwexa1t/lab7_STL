#pragma once
#include "Figure.h"
#include <string>
using namespace std;

class Circle : public Figure
{
private:
	int radius;
	string color;

public:
	Circle(); //Конструктор без параметров
	Circle(int radius, string color);//Конструктор с параметрами
	~Circle(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
};




