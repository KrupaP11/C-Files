/* Name: Krupa Pothiwala
   Email: kpothiwala2023@my.fit.edu
   Purpose: Create an application, that reads floating point data from a file, and display the
            sum of all the floating point values, and the square root to another file.

      Initialize sum
      Open inputFile
      Test for inputFile open error
      Open outputFile
      Test for outputFile open error
      Set precision & fixed notation & showpoint
      Output Heading to outputFile
      While (Reading number and NOT EOF)
        Add number to sum
        Output number & square root to outputFile
      End While
      Display sum
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;


int main()
{
    double sum = 0;
    double number;

    ifstream inFile("Numbers.txt");

    if (inFile.fail())
    {
        cout << "Input File opening failed.\n";
        exit(1);
    }

    cout.precision(2); cout.setf(ios::fixed); cout.setf(ios::showpoint);

    cout << right << setw(6) << "Number" << setw(17) << "Square Root" << endl;
    cout << right << setw(6) << "======" << setw(17) << "===========" << endl;

    while (inFile >> number)
    {
        sum += number;
        cout << right << setw(6) << number << setw(17) << sqrt(number) << endl;

    }

    cout << "Sum = " << sum << endl;
   
}

