// Name: Krupa Pothiwala
// Email: kpothiwala2023@my.fit.edu
// Purpose: Create an application, “Shape Calculator Functions” that displays one of the four messages, 
// including display of the area using the functions after the input is provided.
// Algorithms:
// Display the following:
// Welcome to shape calculation application!
//
//	1. Process Circle
//	2. Process square
//	3. Process Right Triangle
//	4. Exit
//
//	Enter the choices and press return
//
// Algorithm
// if “1” selected 
//	Prompt the user for Radius
//	Get Radius
//	Calls the Circle Function passing Radius as actual parameter
//	Store the information in Area
//	Display “Area of Circle is: “
// 
// else if “2” Selected
//	Prompt the user for Length
//	Get Length
//	Calls the Square Function passing Length as actual parameter
//	Store the information in Area
//	Display “Area of Square is: “
//
// else if “3” selected
//	Prompt the user for Height
//	Get Height
//	Prompt the user for Base
//	Get Base
//	Calls the Triangle Function passing Height and Base as actual parameters
//	Store the information in Area
//	Display “Area of Right Triangle is: “
//
// else if “4” selected
//	Display “Thank you for performing the Shape Calculations!”

#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14;

double CalculateCircle(double num1), CalculateSquare(double Length), CalculateTriangle(double Height, double Base);
double area, Radius, Length, Base, Height;
int main ()
{
    bool exit=false;
    
    int choice;
    do {
        cout<<"\nWelcome to Shape Calculation Application!\n";
        cout << "1. Process Circle\n";
        cout << "2. Process Square\n";
        cout << "3. Process Right Triangle\n";
        cout << "4. Exit\n\n";
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "Please enter Radius: ";
                cin >> Radius;
                
                area = CalculateCircle(Radius);
                cout << "\nThe area of the Circle is: " << area << endl;
                break;
            
            case 2:
                cout << "Please enter Length: ";
                cin >> Length;
                
                area = CalculateSquare(Length);
                cout << "\nThe area of the Square is: " << area << endl;
                break;
            
            case 3:
                cout << "Please enter Height: ";
                cin >> Height;
                cout << "Please enter Base: ";
                cin >> Base;
                
                area = CalculateTriangle(Height, Base);
                cout << "\nThe area of the Right Triangle is: " << area << endl;
                break;
                
            case 4:
                exit = true;
                break;
        }
    } while (exit == false);
    cout << "\n Thank you for performing the Shape Calculations!\n\n";
}

double CalculateCircle(double Radius)
{
    double product;
    product = PI * Radius * Radius;
    return product;
}

double CalculateSquare(double Length)
{
    double product;
    product = Length * Length;
    return product;
}

double CalculateTriangle(double Height, double Base)
{
    double product;
    product = Height * Base * 0.5;
    return product;
}

