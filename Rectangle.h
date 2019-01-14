#pragma once
#include "Shape.h"

class Rectangle : public Shape
{

public:
	Rectangle();
	~Rectangle ();

protected:

	void getLength();
	double calculateArea();
	double calculateCircumference();


};