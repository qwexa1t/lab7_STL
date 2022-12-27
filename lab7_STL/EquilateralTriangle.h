#pragma once
#include "Figure.h"
#include "Triangle.h"
#include <string>
using namespace std;

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(); //����������� ��� ����������
	EquilateralTriangle(int side) :Triangle(side) {}; //� ������������ ������������ ������ � ����������� ����� ������������ �������� ������
	~EquilateralTriangle(); //����������
	void set(); //��������� �������
	void print();
	float area() const;
	EquilateralTriangle& operator = (const EquilateralTriangle& equilateraltriangle); //���������� ��������� ������������
	friend ostream& operator << (ostream& out, const EquilateralTriangle& equilateraltriangle); //���������� ��������� << ��� ������ ������ Print()
};