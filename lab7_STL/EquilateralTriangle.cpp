#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <iomanip>
#include "EquilateralTriangle.h"
using namespace std;

EquilateralTriangle::EquilateralTriangle() //Конструктор без параметров
{
	side = 0;
}

EquilateralTriangle::~EquilateralTriangle() //Деструктор
{
}

void EquilateralTriangle::set()
{
	printf(" Введите сторону:");
	scanf("%d", &side);
}

float EquilateralTriangle::area() const
{
	return sqrt(3) / 4 * pow(side, 2);;
}

void EquilateralTriangle::print()
{
	printf("\n Равносторонний Треугольник");
	printf("\n Сторона - %d", side);
	printf("\n Площадь - %.2f\n", area());
}

EquilateralTriangle& EquilateralTriangle::operator = (const EquilateralTriangle& equilateraltriangle)
{
	//Делаем копию
	side = equilateraltriangle.side;
	//Возвращаем существующий объект
	return *this;
}

ostream& operator << (ostream& out, const EquilateralTriangle& equilateraltriangle)
{
	// здесь выполняется фактический вывод

	out << "\n Сторона - " << equilateraltriangle.side
		<< "\n Площадь - " << setprecision(3) << equilateraltriangle.area() << endl;

	// возвращаем std::ostream, чтобы мы могли
	// объединить в цепочку вызовы operator<<
	return out;
}



