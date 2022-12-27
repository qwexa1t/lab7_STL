#pragma once
#include "Figure.h"
#include <string>
using namespace std;

class Circle : public Figure
{
private:
	int radius;
	string color;

public:
	Circle(); //����������� ��� ����������
	Circle(int radius, string color);//����������� � �����������
	~Circle(); //����������
	void set(); //��������� �������
	void print();
	float area();
};




