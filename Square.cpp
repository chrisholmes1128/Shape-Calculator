#include "Shape.h"
#include "Square.h"
#include <iostream>
#include <string>

using namespace std;
Square::Square()
{

}

void Square::getLength()
{
	cout << "Enter a width: \n";
	while (!(cin >> length1))
	{
		cout << "Enter a width: \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
}

double Square::calculateArea()
{
	return length1 * length1;

}

double Square::calculateCircumference()
{
	return 4 * length1;
}

Square::~Square()
{
}
