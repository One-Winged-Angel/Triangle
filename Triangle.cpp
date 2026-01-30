#include "Triangle.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

Triangle::Triangle()
{
	sideA = 1;
	sideB = 2;
	sideC = 2;
}

Triangle::Triangle(double sideA, double sideB, double sideC)
{
	this->sideA = sideA;
	this->sideB = sideB;
	this->sideC = sideC;
}

double Triangle::getSideA() const
{
	return sideA;
}

double Triangle::getSideB() const
{
	return sideB;
}

double Triangle::getSideC() const
{
	return sideC;
}

void Triangle::setSideA(double sideA)
{
	this->sideA = sideA;

}

void Triangle::setSideB(double sideB)
{
	this->sideB = sideB;
}

void Triangle::setSideC(double sideC)
{
	this->sideC = sideC;
}

bool Triangle::isValid() const
{
	if (sideA <= 0 || sideB <= 0 || sideC <= 0)
	{
		return false;
	}
	else if (sideA + sideB <= sideC || sideB + sideC <= sideA ||sideA + sideC <= sideB)
	{
		return false;
	}
	else
	{
		return true;
	}
}

double Triangle::perimeter() const
{
	return sideA + sideB + sideC;
}

double Triangle::area() const
{
	if (!isValid())
	{
		cout << "Cannot compute are as invalid triangle\n";
	}
	else
	{
		double s = perimeter() / 2;
		return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
	}
	
}


