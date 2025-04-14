// Name: Krupa Pothiwala
// Email: kpothiwala2023@my.fit.edu
// Purpose: Create an application, “SimpleLoop” that displays a name 
//          multiple times, using '_' to substitute for space character
// Algorithm:	
//      Prompt the user for a name (i.e., format is LastName_FirstInitial, 
// 	     e.g. “Bennett_J”)
//	Store value in myName (i.e., uses a string variable)
//	Prompt user for number of iterations
//	Store value in numIterations
//	Loop 1 to numberIterations
//        Display myName
//      End Loop

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string myName;
	int numIterations;

	cout << "Please enter name (i.e., format is LastName_FirstInitial, "
		<< "e.g.\"Bennett_J\")" << endl;
	cin >> myName;
	cout << "Please enter number of interations: ";
	cin >> numIterations;

	for (int i = 0; i< numIterations; i++)
	{
		cout << " Name is " << myName << endl;
	}

}
