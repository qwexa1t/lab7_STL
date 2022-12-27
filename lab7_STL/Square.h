#pragma once
#include "Figure.h"

template <typename T>
class Square : public Figure
{
private:
	T side;
	static int Count;

public:
	Square(); //Конструктор без параметров
	Square(T side);//Конструктор с параметрами
	~Square(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();

	static void GetCount()
	{
		printf(" Количество созданных квадратов: %d\n", Count);
	}
	static void ResetCount()
	{
		Count = 0;
	}

	// операторная функция, которая перегружает
	// префиксную форму оператора ++ для класса Square
	Square& operator ++()
	{
		this->side++;

		return *this; // вернуть объект данного класса
	}

	// операторная функция, которая перегружает
	// постфиксную форму оператора ++ для класса Square
	Square& operator ++(int value) // параметр value не используется
	{
		this->side++;

		return *this;
	}
};

