#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale>
#include <math.h>
#include <cstring>
#include <windows.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Circle.h"
#include "EquilateralTriangle.h"
using namespace std;

//Бинарный предикат для сортировки по возрастанию
bool increase(Triangle tr1, Triangle tr2)
{
	if (tr1.area() < tr2.area()) //Если слева площадь меньше не переставлять
		return true;
	else
		return false;
}

//Бинарный предикат для сортировки по убыванию
bool decrease(Triangle tr1, Triangle tr2)
{
	if (tr1.area() > tr2.area()) 
		return true;
	else
		return false;
}

//Бинарный предикат для поиска максимальной площади
bool SearchMax(Triangle tr1, Triangle tr2) 
{
	return tr1.area() < tr2.area();
}

//Бинарный предикат для поиска минимальной площади
bool SearchMin(Triangle tr1, Triangle tr2)
{
	return tr1.area() < tr2.area();
}

//Унарный предикат для поиска площади в определенном диапазоне 
bool SearchofRange(Triangle tr1)
{
	return (tr1.area() >= 5 && tr1.area() <= 10);
}

void ChangeTrapezoid(Trapezoid& object)
{
	printf("\n Введите данные: \n\n");
	printf(" Введите Нижнее Основание:");
	scanf("%d", &object.lower_base);
	printf(" Введите Верхнее Основание:");
	scanf("%d", &object.upper_base);
	printf(" Введите Высоту:");
	scanf("%d", &object.height);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	int kolvo;

	do
	{
		printf("\n Программа для вычисления площади различных фигур");
		printf("\n Выберите фигуру: ");
		printf("\n 1) Квадрат");
		printf("\n 2) Прямоугольник");
		printf("\n 3) Треугольник");
		printf("\n 4) Трапеция");
		printf("\n 5) Круг");
		printf("\n 6) Равносторонний треугольник");
		printf("\n 7) Три Обычных и Равносторонних треугольников");
		printf("\n 8) Сортировка и Поиск площадей треугольников");
		printf("\n 9) Завершить программу");
		printf("\n\n Введите номер фигуры: ");
		while (scanf("%d", &N) != 1 || N <= 0 || N > 9)
		{
			while (getchar() != '\n');
			printf("\n Вы ввели Неверный номер. Повторите попытку.\n");
			printf("\n Введите номер фигуры: ");
		}
		switch (N)
		{
		case 1:
		{
			printf("\n Вы выбрали квадрат \n");
			printf("\n Пример \n");
			Square<int>* square1 = new Square<int>; //Выделение Динамической памяти объекту класса Square
			Square<int>* square2 = new Square<int>;
			(*square1).print(); //Вывод площади квадрата на экран
			printf("\n\n Введите данные: \n\n");
			(*square1).set(); //Установка значений
			(*square1).print();
			printf("\n\n Введите данные: \n\n");
			(*square2).set(); //Установка значений
			(*square2).print();
			square1->GetCount(); //Вывод количества объектов на экран
			square2->ResetCount(); //Обнуление счетчика 
			delete square1, square2; //Освобождение памяти 
			break;
		}
		case 2:
		{
			printf("\n Вы выбрали Прямоугольник \n");
			printf("\n Пример \n");
			//Вызов конструктора с 1 параметром
			Rectang* rectang1 = new Rectang(7); //Выделение Динамической памяти объекту класса Rectang
			rectang1->print(); //Вывод площади Прямоугольника на экран
			printf("\n Сколько Прямоугольников создать? (1-5)");
			while (scanf("%d", &kolvo) != 1 || kolvo <= 0 || kolvo > 5)
			{
				while (getchar() != '\n');
				printf("\n Выход за границы массива.\n");
				printf(" Сколько Прямоугольников создать? (1-5)");
			}
			Rectang* rectang_arr = new Rectang[5];
			for (int i = 0; i < kolvo; i++)
			{
				printf("\n\n Введите данные: \n\n");
				rectang_arr[i].set(); //Установка значений
				rectang_arr[i].print();
			}
			delete rectang1; //освобождение памяти
			delete[] rectang_arr;
			break;
		}
		case 3:
		{
			printf("\n Вы выбрали Треугольник \n");
			printf("\n Пример \n");
			//Вызов конструктора с 2 параметрами
			Triangle* triangle1 = new Triangle(3, 5); //Выделение Динамической памяти объекту класса Triangle
			triangle1->print(); //Вывод площади Треугольника на экран
			printf("\n\n Введите данные: \n\n");
			triangle1->set(); //Установка значений
			triangle1->print();
			delete triangle1; //освобождение памяти
			break;
		}
		case 4:
		{
			int change = 0;
			float area1 = 0;
			float area2 = 0;
			printf("\n Вы выбрали Трапецию \n");
			printf("\n Пример \n");
			//Вызов конструктора с 3 параметрами
			Trapezoid* trapezoid1 = new Trapezoid(4, 2, 3); //Выделение Динамической памяти объекту класса Trapezoid
			trapezoid1->print(); //Вывод площади Трапеции на экран
			printf("\n\n Введите данные: \n\n");
			trapezoid1->set(); //Установка значений
			trapezoid1->print();
			trapezoid1->areaLink(area1);
			trapezoid1->areaPointer(&area2);
			printf("\n Площадь(Возврат через ссылку) - %.2f\n", area1);
			printf("\n Площадь(Возврат через указатель) - %.2f\n", area2);
			printf("\n Хотите изменить данные Трапеции?");
			printf("\n 1 - Да, Любой другой номер - Нет\n");
			printf(" ");
			scanf("%d", &change);
			if (change == 1)
			{
				ChangeTrapezoid(*trapezoid1);
				trapezoid1->print();
				trapezoid1->areaLink(area1);
				trapezoid1->areaPointer(&area2);
				printf("\n Площадь(Возврат через ссылку) - %.2f\n", area1);
				printf("\n Площадь(Возврат через указатель) - %.2f\n", area2);
			}
			delete trapezoid1; //освобождение памяти;
			break;
		}
		case 5:
		{
			const int M = 10;
			printf("\n Вы выбрали Круг \n");
			printf("\n Пример \n");
			//Вызов конструктора с 1 параметром
			Circle* circle1 = new Circle(6, "Yellow"); //Выделение Динамической памяти объекту класса Circle
			circle1->print(); //Вывод площади Круга на экран
			printf("\n Сколько Кругов создать? (1-5)");
			while (scanf("%d", &kolvo) != 1 || kolvo <= 0 || kolvo > 5)
			{
				while (getchar() != '\n');
				printf("\n Выход за границы массива.\n");
				printf(" Сколько Кругов создать? (1-5)");
			}
			//Объявление двумерного динамического массива объектов:
			Circle** circle_arr = new Circle * [5];
			for (int i = 0; i < kolvo; i++)
			{
				circle_arr[i] = new Circle[1];
			}
			for (int i = 0; i < kolvo; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					printf("\n\n Введите данные: \n\n");
					circle_arr[i][j].set(); //Установка значений
					circle_arr[i][j].print();
				}
			}
			delete circle1; //освобождение памяти
			//Освобождение памяти отводимое под двумерный динамический массив объектов
			for (int i = 0; i < kolvo; i++)
			{
				delete[] circle_arr[i];
			}
			break;
		}
		case 6:
		{
			printf("\n Вы выбрали Равносторонний Треугольник \n");
			printf("\n Пример \n");
			EquilateralTriangle* EqTr = new EquilateralTriangle(1); //Выделение Динамической памяти объекту класса EquilateralTriangle
			cout << *EqTr; //Вывод площади Равностороннего Треугольника на экран
			printf("\n\n Введите данные: \n\n");
			EqTr->set(); //Установка значений
			cout << *EqTr;
			EquilateralTriangle* EqTr2 = new EquilateralTriangle();
			EquilateralTriangle* EqTr3 = new EquilateralTriangle();
			cout << "\n Вывод на экран Площадей равносторонних треугольников до присваивания" << endl;
			cout << *EqTr2;
			cout << *EqTr3;
			EqTr3 = EqTr2 = EqTr;
			cout << "\n Вывод на экран Площадей равносторонних треугольников после присваивания" << endl;
			cout << *EqTr2;
			cout << *EqTr3;
			delete EqTr, EqTr2, EqTr3; //освобождение памяти
			break;
		}
		case 7:
		{
			vector<Triangle*> v;  // контейнер для Triangle и EquilateralTriangle (указатели базового класса!)
			// динамические объекты для заполнения.

			Triangle* Tr;
			EquilateralTriangle* EqTr;

			Tr = new Triangle;
			EqTr = new EquilateralTriangle;

			Tr = new Triangle(1, 2);
			v.push_back(Tr);
			Tr = new Triangle(5, 6);
			v.push_back(Tr);
			EqTr = new EquilateralTriangle(1);
			v.push_back(EqTr);
			EqTr = new EquilateralTriangle(3);
			v.push_back(EqTr);
			Tr = new Triangle(3, 4);
			v.push_back(Tr);
			EqTr = new EquilateralTriangle(2);
			v.push_back(EqTr);
			// В контейнере 3 Triangle и 3 EquilateralTriangle

			//Вывод площадей на экран
			vector<Triangle*>::iterator  ir;
			for (ir = v.begin(); ir != v.end(); ++ir)
			{
				(*ir)->print();
			}

			delete Tr, EqTr;
			break;
		}
		case 8:
		{
			vector<Triangle> v1;
			vector<Triangle>::iterator  ir;

			Triangle Tr1(1,2), Tr2(5,6), Tr3(3,4), Tr4(7,8);
			v1.push_back(Tr1);
			v1.push_back(Tr2);
			v1.push_back(Tr3);
			v1.push_back(Tr4);

			Tr1.print();
			Tr2.print();
			Tr3.print();
			Tr4.print();

			//Сортировка по возрастанию
			sort(v1.begin(), v1.end(), increase);
			cout << endl << " Сортировка по Возрастанию\n";
			for (ir = v1.begin(); ir != v1.end(); ++ir)
			{
				cout << " Площадь - " << ir->area();
			}
			cout << endl;

			//Сортировка по убыванию
			sort(v1.begin(), v1.end(), decrease);
			cout << endl << " Сортировка по Убыванию\n";
			for (ir = v1.begin(); ir != v1.end(); ++ir)
			{
				cout << " Площадь - " << ir->area();
			}
			cout << endl;

			//Поиск максимального элемента
			auto max = max_element(v1.begin(), v1.end(), SearchMax);
			cout << endl << " Поиск Максимального элемента";
			cout << "\n Наибольшая Площадь = " << max->area() << endl;

			//Поиск минимального элемента
			auto min = min_element(v1.begin(), v1.end(), SearchMin);
			cout << endl << " Поиск Минимального элемента";
			cout << "\n Наименьшая Площадь = " << min->area() << endl;
			
			//Поиск элемента в опеределенном диапазоне
			ir = find_if(v1.begin(), v1.end(), SearchofRange);
			cout << endl << " Попытка нахождения площади в диапазоне [5;10]";
			if (ir != v1.end())     // если найден вывести
				cout << "\n Найденная Площадь = " << ir->area() << endl;
			else
				cout << "\n Такой плошади не найдено" << endl;
			
			break;
		}

		}
	} while (N != 9);
}