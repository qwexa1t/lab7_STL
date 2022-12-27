#pragma once
#include "Figure.h"

class Trapezoid : public Figure
{
private:
	int lower_base;
	int upper_base;
	int height;

public:
	Trapezoid(); //Конструктор без параметров
	Trapezoid(int lower_base, int upper_base, int height);//Конструктор с параметрами
	Trapezoid(int lower_base);//Конструктор с 1 параметром
	~Trapezoid(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
	void areaLink(float& area1);
	void areaPointer(float* p_area2);
	friend void ChangeTrapezoid(Trapezoid& object);
};

