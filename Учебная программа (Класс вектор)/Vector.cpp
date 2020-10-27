#include "Vector.h"
#include <iostream>

using namespace std;
	
Vector::Vector(int n)
{
	dim = n;
	coords = new double[n];
}
Vector::~Vector()
{
	delete []coords;
}
void Vector::fill()
{
	for (int i = 0; i < dim; i++)
	{
		cin>>coords[i];
	}
}
void Vector::print()
{
	for (int i = 0; i < dim; i++)
	{
		cout << "Coords[" << i << "]" << coords[i] << endl;
	}
}

double multi(Vector* v1, Vector* v2)
{
	
	double res=0;
	for (int i = 0; i < v1->dim;  i++)
		res += (v1->coords[i])*(v2->coords[i]);
	return res;
}

Vector* sum(Vector* v1, Vector* v2)
{
	Vector* res;
	if (v1->dim != v2->dim)
		throw"Error";
	res = new Vector(v1->dim);
	for (int i = 0; i < res->dim; i++)
		res->coords[i] = v1->coords[i] + v2->coords[i];
	return res;
}

Vector* sub(Vector* v1, Vector* v2)
{
	Vector* res;
	if (v1->dim != v2->dim)
		throw"Error";
	res = new Vector(v1->dim);
	for (int i = 0; i < res->dim; i++)
		res->coords[i] = v1->coords[i] - v2->coords[i];
	return res;
}