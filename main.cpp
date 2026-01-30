#include "Triangle.h"
#include <iostream>
#include <string>
using namespace std;
void printTriangleData(const Triangle& t);


int main()
{
	Triangle t1;
	Triangle t2(3, 4, 5);
	Triangle t3(1, 2, 3);
	
	printTriangleData(t1);
	printTriangleData(t2);
	printTriangleData(t3);
	
	cout << boolalpha << "Triangle t3, valid triangle: " << t3.isValid();
	return 0;

	
}

void printTriangleData(const Triangle& t)
{
	cout << "Triangle data\n";
	cout << "sideA: " << t.getSideA() << endl;
	cout << "sideB: " << t.getSideB() << endl; 
	cout << "sideC: " << t.getSideC() << endl;
	cout << "valid triangle: " << boolalpha << t.isValid() << endl;
	cout << "Perimeter: " << t.perimeter() << endl;
	cout << "Area: " << t.area() << endl;

}
