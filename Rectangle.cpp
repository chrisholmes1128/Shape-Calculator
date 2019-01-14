#include "Shape.h"
#include "Rectangle.h"
#include <iostream>
#include <string>

using namespace std;

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::getLength()
{

	cout << "Enter a height: \n";
	while (!(cin >> length1))
	{
		cout << "Enter a height: \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
	cout << "Enter a width \n";
	while (!(cin >> length2))
	{
		cout << "Enter a width: \n";
		cin.clear();
		cin.ignore(100, '\n');
	}

}

double Rectangle::calculateArea()
{
	return length1 * length2;
}

double Rectangle::calculateCircumference()
{
	return (2 * length1) + (2 * length2);
}
