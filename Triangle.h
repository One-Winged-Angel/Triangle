#pragma once
#include <iostream>
#include <string>
using namespace std;

class Triangle
{
public:
	Triangle();
	Triangle(double a, double b, double c);
	double getSideA() const;
	double getSideB() const;
	double getSideC() const;
	void setSideA(double a);
	void setSideB(double b);
	void setSideC(double c);
	bool isValid() const;
	double perimeter() const;
	double area() const;

private:
	double sideA;
	double sideB;
	double sideC;
	
};

