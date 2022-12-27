#pragma once
#include "Figure.h"
#include <string>
using namespace std;

class Triangle : public Figure
{
protected:
	int side;
	int height;

public:
	Triangle(); //����������� ��� ����������
	Triangle(int side, int height);//����������� � �����������
	Triangle(int side); //����������� � 1 ����������
	~Triangle(); //����������
	void set(); //��������� �������
	void print();
	float area();
};










