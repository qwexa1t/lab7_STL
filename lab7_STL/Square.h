#pragma once
#include "Figure.h"

template <typename T>
class Square : public Figure
{
private:
	T side;
	static int Count;

public:
	Square(); //����������� ��� ����������
	Square(T side);//����������� � �����������
	~Square(); //����������
	void set(); //��������� �������
	void print();
	float area();

	static void GetCount()
	{
		printf(" ���������� ��������� ���������: %d\n", Count);
	}
	static void ResetCount()
	{
		Count = 0;
	}

	// ����������� �������, ������� �����������
	// ���������� ����� ��������� ++ ��� ������ Square
	Square& operator ++()
	{
		this->side++;

		return *this; // ������� ������ ������� ������
	}

	// ����������� �������, ������� �����������
	// ����������� ����� ��������� ++ ��� ������ Square
	Square& operator ++(int value) // �������� value �� ������������
	{
		this->side++;

		return *this;
	}
};

