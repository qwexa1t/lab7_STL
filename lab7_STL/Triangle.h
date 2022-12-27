#pragma once
#include "Figure.h"
#include <string>
using namespace std;

class Triangle : public Figure
{
protected:
	int side;
	int height;

public:
	Triangle(); //Конструктор без параметров
	Triangle(int side, int height);//Конструктор с параметрами
	Triangle(int side); //Конструктор с 1 параметром
	~Triangle(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
};










