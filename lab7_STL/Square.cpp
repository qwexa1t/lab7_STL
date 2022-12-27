#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"
using namespace std;

template <typename T>
int Square<T>::Count = 0;

template <typename T>
Square<T>::Square() //����������� ��� ����������
{
	side = 4;
	Count++;
}

template <typename T>
Square<T>::Square(T side) //����������� � �����������
{
	this->side = side;
}

template <typename T>
Square<T>::~Square() //����������
{
}

template <typename T>
void Square<T>::set()
{
	printf(" ������� �������:");
	cin >> side;
	try
	{
		if (side < 0) throw "Negative number.";
		if (side > 100) throw "Large number. Maximum value 100";
		if (!cin) throw "Not integer number.";
	}
	catch (const char* e)
	{
		printf("\n Error: %s\n\n", e);
		exit(1);
	}

}

template <typename T>
float Square<T>::area()
{
	return side * side;
}

template <typename T>
void Square<T>::print()
{
	cout << "\n ������� - " << side;
	printf("\n ������� - %.0f\n", area());
}

template class Square<int>;