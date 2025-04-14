// Name: Krupa Pothiwala
// Email: kpothiwala2023@my.fit.edu
// Purpose: Create an application, “Shape Calculator” that displays one of the four messages, 
// including display of the perimeter/circumference and area after the input is provided.
// Algorithms:
// Loop
// Display the following:
// Welcome to shape calculation application!
//
//	1. Process Circle
//	2. Process square
//	3. Process Right Triangle
//	4. Exit
//
// Enter the choices and press return
//
// Algorithm
// if “1” selected 
//	Prompt the user for Radius
//	Get Radius
//	Area = Pi * Radius * Radius
//	Circumference = 2 * Pi * Radius
//	Display “Area of Circle is: “
//	Display “Circumference of Circle is: “
// 
// else if “2” Selected
//	Prompt the user for Length
//	Get Length
//	Area = Length * Length
//	Perimeter = 4 * Length
//	Display “Area of Square is: “
//	Display “Perimeter of Square is: “
//
// else if “3” selected
//	Prompt the user for Height
//	Get Height
//	Prompt the user for Base
//	Get Base
//	Area = ½ (Height * Base)
//	Perimeter = Height + Base + sqrt(Height^2 + Base^2)
//	Display “Area of Right Triangle is: “
//	Display “Perimeter of Right Triangle is: “
//
// else if “4” selected
// while "4" = true
// Display “Thank you for performing the Shape Calculator Application!”


#include <iostream>
#include <cmath>

using namespace std;
const int PI = 3.14;

int main()
{

    double area, circumference, length, height, base, perimeter, radius;
    bool exit=false;
    
    int choice;
    do {
        cout << "\nWelcome to shape calculation application\n\n";
        cout << "1) Process Circle\n";
        cout << "2) Process Square\n";
        cout << "3) Process Right Triangle\n";
        cout << "4) Exit\n\n";
        cin >> choice;


        switch (choice)
        {
        case 1:
            cout << "Enter Radius: ";
            cin >> radius;
            area = PI * (radius * radius);
            circumference = 2 * PI * radius;
            cout << "\nThe Area of the Circle is: " << area << endl;
            cout << "The Circumference of the Circle is: " << circumference << endl;
            break;

        case 2:
            cout << "Enter Length: ";
            cin >> length;
            area = length * length;
            perimeter = 4 * length;
            cout << "\nThe Area of the Square is: " << area << endl;
            cout << "The Perimeter of the Sqaure is: " << perimeter << endl;
            break;

        case 3:
            cout << "Enter Base: ";
            cin >> base;
            cout << "Enter Height: ";
            cin >> height;
            area = (base * height) * 1 / 2;
            perimeter = height + base + sqrt((height * height) + (base * base));
            cout << "\nThe Area of the Right Triangle is: " << area << endl;
            cout << "The Perimeter of the Right Triangle is: " << perimeter << endl;
            break;

        case 4:
            exit = true;
            break;
        }
    } while (exit == false);
    cout << "\nThank you for performing the Shape Calculator Application!\n\n";
}

