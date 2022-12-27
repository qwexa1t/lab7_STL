#pragma once
#include "Figure.h"

class Trapezoid : public Figure
{
private:
	int lower_base;
	int upper_base;
	int height;

public:
	Trapezoid(); //����������� ��� ����������
	Trapezoid(int lower_base, int upper_base, int height);//����������� � �����������
	Trapezoid(int lower_base);//����������� � 1 ����������
	~Trapezoid(); //����������
	void set(); //��������� �������
	void print();
	float area();
	void areaLink(float& area1);
	void areaPointer(float* p_area2);
	friend void ChangeTrapezoid(Trapezoid& object);
};

