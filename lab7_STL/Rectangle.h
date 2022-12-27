#pragma once
#include "Figure.h"

class Rectang : public Figure
{
private:
	int length;
	int width;

public:
	Rectang(); //����������� ��� ����������
	Rectang(int length, int width);//����������� � �����������
	Rectang(int length);//����������� � 1 ����������
	~Rectang(); //����������
	void set(); //��������� �������
	void print();
	float area();
};


