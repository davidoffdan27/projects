#pragma once
#include<iostream>
using namespace std;
class Vector
{
private:
	int dim;//����������� ������� 
	double*coords;//���������� �������
public:
	Vector(int);
	~Vector();
	void fill();
	void print();
	friend Vector* sum(Vector* v1, Vector* v2);
	friend Vector* sub(Vector* v1, Vector* v2);
	friend double multi(Vector* v1, Vector* v2);
};

