#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include "Circle.h"
using namespace std;

Circle::Circle() //Конструктор без параметров
{
	radius = 1;
	color = " ";
}

Circle::Circle(int radius, string color) //Конструктор с параметрами
{
	this->radius = radius;
	this->color = color;
}

Circle::~Circle() //Деструктор
{
}

void Circle::set()
{
	printf(" Введите Радиус:");
	scanf("%d", &radius);
	printf(" Введите Цвет:");
	cin >> color;
}

float Circle::area()
{
	return PI * radius * radius;
}

void Circle::print()
{
	cout << "\n Цвет: " << color << endl;
	printf("\n Радиус - %d", radius);
	printf("\n Площадь - %.2f\n", area());
}
