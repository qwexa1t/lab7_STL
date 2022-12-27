#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid::Trapezoid() //Конструктор без параметров
{
	lower_base = 0;
	upper_base = 0;
	height = 0;
}

Trapezoid::Trapezoid(int lower_base, int upper_base, int height) //Конструктор с параметрами
{
	this->lower_base = lower_base;
	this->upper_base = upper_base;
	this->height = height;
}

Trapezoid::Trapezoid(int lower_base) //Конструктор с 1 параметром
{
	this->lower_base = lower_base;
	upper_base = 1;
	height = 1;
}

Trapezoid::~Trapezoid() //Деструктор
{
}

void Trapezoid::set()
{
	printf(" Введите Нижнее Основание:");
	scanf("%d", &lower_base);
	printf(" Введите Верхнее Основание:");
	scanf("%d", &upper_base);
	printf(" Введите Высоту:");
	scanf("%d", &height);
}

float Trapezoid::area() //Возврат значения по значению
{
	return 0.5 * (lower_base + upper_base) * height;
}

void Trapezoid::areaLink(float& area1) //Возврат значения по ссылке
{
	area1 = 0.5 * (lower_base + upper_base) * height;
}

void Trapezoid::areaPointer(float* p_area2) //Возврат значения по адресу
{
	(*p_area2) = 0.5 * (lower_base + upper_base) * height;
}

void Trapezoid::print()
{
	printf("\n Нижнее Основание - %d", lower_base);
	printf("\n Верхнее Основание - %d", upper_base);
	printf("\n Высота - %d", height);
	printf("\n Площадь - %.2f\n", area());
}


