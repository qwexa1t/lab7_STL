#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Rectangle.h"

Rectang::Rectang() //Конструктор без параметров
{
	length = 0;
	width = 0;
}

Rectang::Rectang(int length, int width) //Конструктор с параметрами
{
	this->length = length;
	this->width = width;
}

Rectang::Rectang(int length) //Конструктор с 1 параметром
{
	this->length = length;
	width = 1;
}

Rectang::~Rectang() //Деструктор
{
}

void Rectang::set()
{
	printf(" Введите Длину:");
	scanf("%d", &length);
	printf(" Введите Ширину:");
	scanf("%d", &width);
}

float Rectang::area()
{
	return length * width;
}

void Rectang::print()
{
	printf("\n Длина прямоугольника - %d", length);
	printf("\n Ширина прямоугольника - %d", width);
	printf("\n Площадь - %.0f\n", area());
}


