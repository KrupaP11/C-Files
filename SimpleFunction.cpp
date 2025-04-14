// Name: Krupa Pothiwala
// Email: kpothiwala2023@my.fit.edu
// Purpose: Create an application, "SimpleFunction" that uses
// a function that receives two integer arguments
// and returns an integer result. The application
// performs as follows.
// Algorithm:
// 1. Defines and declare a function, SumFunction that
// contains two integer formal parameters and returns
// an integer value
// 2. The main function performs the following
// a. Prompts the user for number1 value
// b. Stores the value in number1
// c. Prompts the user for number2 value
// d. Stores the value in number2
// e. Calls the SumFunction passing number1 & number2
// as actual parameters
// f. Stores the result of the call in total
// g. Display the total

#include <iostream>

using namespace std;

int SumFunction(int num1, int num2);

int main()
{
    int number1, number2, total;

    cout << "Please enter Number 1: ";
    cin >> number1;
    cout << "Please enter Number 2: ";
    cin >> number2;
    
    total = SumFunction(number1, number2);
    cout << "Total = " << total << endl;
}

int SumFunction(int num1, int num2)
{
    int sum;

    sum = num1 + num2;

    return sum;
}