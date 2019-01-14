#pragma once
#include "Shape.h"

class Square: public Shape
{

public:
	Square();
	~Square();
	
protected:

	void getLength();
	double calculateArea();
	double calculateCircumference();

};
