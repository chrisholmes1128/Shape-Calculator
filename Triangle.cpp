#include "Shape.h"
#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

Triangle::Triangle()
{
}

Triangle::~Triangle()
{
}

void Triangle::getLength()
{

	cout << "Enter a base: \n";
	while (!(cin >> length1))
	{
		cout << "Enter a base: \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
	cout << "Enter a height \n";
	while (!(cin >> length2))
	{
		cout << "Enter a height: \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
	cout << "Enter a third side length \n";
	while (!(cin >> length3))
	{
		cout << "Enter a third height: \n";
		cin.clear();
		cin.ignore(100, '\n');
	}

}

double Triangle::calculateArea()
{
	return length1 * length2;
}

double Triangle::calculateCircumference()
{
	return length1 + length2 + length3;
}
