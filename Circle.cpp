#include "Shape.h"
#include "Circle.h"
#include <iostream>
#include <string>
#pragma once

using namespace std;

Circle::Circle()
{
}

Circle::~Circle()
{
}

void Circle::getLength()
{
	cout << "Enter a radius: \n";
	while (!(cin >> length1))
	{
		cout << "Enter a radius: \n";
		cin.clear();
		cin.ignore(100, '\n');
	}
}

double Circle::calculateArea()
{
	return PI * (length1 * length1);
}

double Circle::calculateCircumference()
{
	return 2 * PI * length1;
}
