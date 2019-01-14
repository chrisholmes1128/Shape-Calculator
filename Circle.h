#pragma once
#include "Shape.h"

class Circle : public Shape
{

public:
	Circle();
	~Circle();

private:
	double PI = 3.14;

protected:
	
	void getLength();
	double calculateArea();
	double calculateCircumference();

};