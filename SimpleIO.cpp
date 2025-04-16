// Name: Krupa Pothiwala
// Email: kpothiwala2023@my.fit.edu
//Purpose: Create an application, “SimpleIO” that performs the following.  
//         1.	Prompts the user for two integer values (i.e., number1 & number2)
//         2.	Displays product of the two numbers as follows 
//              Product of number 1 & number 2 is number1*number2 
// Algorithm:
//     Prompt User for Number 1
//     Get number1
//     Prompt User for Number 2
//     Get number2
//     product = number1 * number2
//     Display product

#include <iostream>

using namespace std;

int main()
{
	int number1, number2;

	cout << "Please enter number1: ";
	cin >> number1;
	cout << "Please enter number 2; ";
	cin >> number2;
	
	cout << "Proudct of " << number1 << " & " << number2 << " is " << (number1 * number2) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
