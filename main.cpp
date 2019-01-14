//Chris Holmes
//Data Structure HW1
//Shape Calculator

#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "main.h"

using namespace std;

mainClass::mainClass()
{
}


int main()
{
	char repeat;
	cout << "-------------------------- Chris's Area & Circumference Calculator --------------------------\n"
		 << endl << endl;
	
	do
	{

		int choice;

		Shape * newShape = nullptr;

		do {
			cout << "Choose a shape to calculate its area (click corresponding number and press enter): \n";
			cout << "1. Sqaure \n";
			cout << "2. Triangle \n";
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

		switch (choice)
		{
		case 1:
			newShape = new Square();
			break;
		case 2:
			newShape = new Triangle();
			break;
		case 3:
			newShape = new Rectangle();
			break;
		case 4:
			newShape = new Circle();
			break;

		default:
			break;
		}

		newShape->getLength();
		
		cout << "The area of the shape = " << to_string(newShape->calculateArea()) << endl;
		cout << "The circumference of the shape = " << to_string(newShape->calculateCircumference()) << endl;

		delete newShape;

		cout << "Would you like to calulate another shape?(y/n): \n";
		cin >> repeat;

		while (repeat == 'n' || repeat == 'N')
		{
			EXIT_SUCCESS;
			cin.get();
			return 0;
		}

	} while (true);
	
	
	cin.get();
	cin.get();
	return 0;

}

mainClass::~mainClass()
{
}

