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
		cout << "������� ���������� ������� �������:" << endl;
		a->fill();
		cout << "������� ���������� ������� �������:" << endl;
		b->fill();
		cout << "����� ��������:" << endl;
		c = sum(a, b);
		c->print();
		cout << "�������� ��������:" << endl;
		d = sub(a, b);
		d->print();
		x = multi(a, b);
		cout << "��������� ������������ ��������:" << endl;
		cout << x;
	}
	catch (const char* ex)
	{
		cout << ex << endl;
	
	}
}

