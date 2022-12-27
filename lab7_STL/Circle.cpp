#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include "Circle.h"
using namespace std;

Circle::Circle() //����������� ��� ����������
{
	radius = 1;
	color = " ";
}

Circle::Circle(int radius, string color) //����������� � �����������
{
	this->radius = radius;
	this->color = color;
}

Circle::~Circle() //����������
{
}

void Circle::set()
{
	printf(" ������� ������:");
	scanf("%d", &radius);
	printf(" ������� ����:");
	cin >> color;
}

float Circle::area()
{
	return PI * radius * radius;
}

void Circle::print()
{
	cout << "\n ����: " << color << endl;
	printf("\n ������ - %d", radius);
	printf("\n ������� - %.2f\n", area());
}
