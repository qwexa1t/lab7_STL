#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <iomanip>
#include "EquilateralTriangle.h"
using namespace std;

EquilateralTriangle::EquilateralTriangle() //����������� ��� ����������
{
	side = 0;
}

EquilateralTriangle::~EquilateralTriangle() //����������
{
}

void EquilateralTriangle::set()
{
	printf(" ������� �������:");
	scanf("%d", &side);
}

float EquilateralTriangle::area() const
{
	return sqrt(3) / 4 * pow(side, 2);;
}

void EquilateralTriangle::print()
{
	printf("\n �������������� �����������");
	printf("\n ������� - %d", side);
	printf("\n ������� - %.2f\n", area());
}

EquilateralTriangle& EquilateralTriangle::operator = (const EquilateralTriangle& equilateraltriangle)
{
	//������ �����
	side = equilateraltriangle.side;
	//���������� ������������ ������
	return *this;
}

ostream& operator << (ostream& out, const EquilateralTriangle& equilateraltriangle)
{
	// ����� ����������� ����������� �����

	out << "\n ������� - " << equilateraltriangle.side
		<< "\n ������� - " << setprecision(3) << equilateraltriangle.area() << endl;

	// ���������� std::ostream, ����� �� �����
	// ���������� � ������� ������ operator<<
	return out;
}



