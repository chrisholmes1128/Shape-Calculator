#pragma once
#include "Shape.h"

class Triangle : public Shape
{

public:
	Triangle();
	~Triangle();

protected:

	void getLength();
	double calculateArea();
	double calculateCircumference();


};