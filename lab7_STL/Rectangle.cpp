#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Rectangle.h"

Rectang::Rectang() //����������� ��� ����������
{
	length = 0;
	width = 0;
}

Rectang::Rectang(int length, int width) //����������� � �����������
{
	this->length = length;
	this->width = width;
}

Rectang::Rectang(int length) //����������� � 1 ����������
{
	this->length = length;
	width = 1;
}

Rectang::~Rectang() //����������
{
}

void Rectang::set()
{
	printf(" ������� �����:");
	scanf("%d", &length);
	printf(" ������� ������:");
	scanf("%d", &width);
}

float Rectang::area()
{
	return length * width;
}

void Rectang::print()
{
	printf("\n ����� �������������� - %d", length);
	printf("\n ������ �������������� - %d", width);
	printf("\n ������� - %.0f\n", area());
}


