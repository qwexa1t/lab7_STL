#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid::Trapezoid() //����������� ��� ����������
{
	lower_base = 0;
	upper_base = 0;
	height = 0;
}

Trapezoid::Trapezoid(int lower_base, int upper_base, int height) //����������� � �����������
{
	this->lower_base = lower_base;
	this->upper_base = upper_base;
	this->height = height;
}

Trapezoid::Trapezoid(int lower_base) //����������� � 1 ����������
{
	this->lower_base = lower_base;
	upper_base = 1;
	height = 1;
}

Trapezoid::~Trapezoid() //����������
{
}

void Trapezoid::set()
{
	printf(" ������� ������ ���������:");
	scanf("%d", &lower_base);
	printf(" ������� ������� ���������:");
	scanf("%d", &upper_base);
	printf(" ������� ������:");
	scanf("%d", &height);
}

float Trapezoid::area() //������� �������� �� ��������
{
	return 0.5 * (lower_base + upper_base) * height;
}

void Trapezoid::areaLink(float& area1) //������� �������� �� ������
{
	area1 = 0.5 * (lower_base + upper_base) * height;
}

void Trapezoid::areaPointer(float* p_area2) //������� �������� �� ������
{
	(*p_area2) = 0.5 * (lower_base + upper_base) * height;
}

void Trapezoid::print()
{
	printf("\n ������ ��������� - %d", lower_base);
	printf("\n ������� ��������� - %d", upper_base);
	printf("\n ������ - %d", height);
	printf("\n ������� - %.2f\n", area());
}


