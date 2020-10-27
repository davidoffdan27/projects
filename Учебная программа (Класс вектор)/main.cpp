#include <iostream>
#include "Vector.h"
#include<locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	try {
		Vector* a = new Vector(2);
		Vector* b = new Vector(2);
		Vector* c = new Vector(2);
		Vector* d = new Vector(2);
		double x;
		cout << "Введите координаты первого вектора:" << endl;
		a->fill();
		cout << "Введите координаты второго вектора:" << endl;
		b->fill();
		cout << "Сумма векторов:" << endl;
		c = sum(a, b);
		c->print();
		cout << "Разность векторов:" << endl;
		d = sub(a, b);
		d->print();
		x = multi(a, b);
		cout << "Скалярное произведение векторов:" << endl;
		cout << x;
	}
	catch (const char* ex)
	{
		cout << ex << endl;
	
	}
}

