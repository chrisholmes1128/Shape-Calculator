// Created by Chris Holmes
// Data Structure HW 1
// Shape Area Calculator 

using namespace std;
#include <iostream>
#include "ShapeCalc.h"
#include "Shape.h"
#include "Sqaure.h"
//#include "Triangle.h"
//
//#include "Rectangle.h"
//#include "Circle.h"


ShapeCalc::ShapeCalc()
{
}

ShapeCalc::~ShapeCalc()
{
}

int main()
{
	int choice;

	do {
		cout << "Choose a shape to calculate its area(click corresponding number and press enter): \n";
		cout << "1. Triangle \n";
		cout << "2. Square \n";
		cout << "3. Rectangle \n";
		cout << "4. Circle \n";
		cin >> choice;
		
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			cout << "Enter a number \n";
			cin >> choice;
		}
	} while (!(choice == 1 || choice == 2 || choice == 3 || choice == 4));

	
	Square sqr;
	//Triangle tri;
	//Rectangle rect;
	//Circle cir;

		switch (choice)
		{

		case 1:

			Shape * shape1 = new sqr;
			shape1->calculateArea;
			shape1->calculateCircumference;
		//case 2: 

		//case 3:
		//	Rectangle r;
		//	Shape * shape3 = &rect;
		//	shape3->calculateArea;
		//	shape3->calculateCircumference;
		//case 4: 
		//	Circle c;
		//	Shape * shape4 = &cir;
		//	shape4->calculateArea;
		//	shape4->calculateCircumference;
		}


	cin.get();
	cin.get();

	return 0;
}


