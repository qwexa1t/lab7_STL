#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include <string>
#include "Triangle.h"
using namespace std;

Triangle::Triangle() //����������� ��� ����������
{
	side = 0;
	height = 0;
}

Triangle::Triangle(int side) //����������� c 1 ����������
{
	this->side = side;
}

Triangle::Triangle(int side, int height) //����������� � �����������
{
	this->side = side;
	this->height = height;
}

Triangle::~Triangle() //����������
{
}

void Triangle::set()
{
	printf(" ������� �������:");
	scanf("%d", &side);
	printf(" ������� ������:");
	scanf("%d", &height);
}

float Triangle::area()
{
	return 0.5 * side * height;
}

void Triangle::print()
{
	printf("\n �����������");
	printf("\n ������� - %d", side);
	printf("\n ������ - %d", height);
	printf("\n ������� - %.2f\n", area());
}

