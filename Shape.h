#pragma once
#include<iostream>

//Base class

class Shape {
public:

	Shape();
	~Shape();

	virtual void getLength() = 0; 
	virtual double calculateArea() = 0;
	virtual double calculateCircumference() = 0;

protected:

	double length1 = 0;
	double length2 = 0;
	double length3 = 0;
	double area;
	double circum;

	

};