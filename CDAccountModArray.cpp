/* Name: Krupa Pothiwala
Email: kpothiwala2023@my.fit.edu
Purpose: Purpose: Create an application, “CDAccountModArray”  stores 5 CDAccountMod structures into an array, and sorts the array based on the balance field. The application will display the structure information.

The CDAccountMod structure is composed of the following
fields/components
• First Name (string)
• Last Name (string)
• Balance (double)
• interestRate (double)
• Term (int)
Algorithm:
Loop i = 1 to 5
Prompt for first name
Get first name
Prompt for last name
Get last name
Prompt for balance
Get balance
Prompt for interest rate
Get interestRate
Prompt for term
Get term
End Loop
Call sort routine

Display Heading "First Name", "Last Name", "Balance", "Interest Rate", "Term"
Loop i = 1 to 5
Display first name last Name balance interst
rate term
End Loop
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct CDAccountMod
{
    string firstName;
    string lastName;
    double balance;
    double interestRate;
    int term;
};

void bubbleSort(CDAccountMod arr[], int length);

const int NUMRECORDS = 2;

int main()
{
    CDAccountMod accounts[NUMRECORDS];

    for (int i = 0; i < NUMRECORDS; i++)
    {
        cout << "Please enter First Name: ";
        cin >> accounts[i].firstName;
        cout << "Please enter Last Name: ";
        cin >> accounts[i].lastName;
        cout << "Please enter Balance: ";
        cin >> accounts[i].balance;
        cout << "Please enter Interest Rate: ";
        cin >> accounts[i].interestRate;
        cout << "Please enter Term: ";
        cin >> accounts[i].term;
    }

    // Call bubblesort
    bubbleSort(accounts, NUMRECORDS);

    cout << setw(10) << "First Name" << setw(14) << "Last Name" << setw(10) << "Balance"
        << setw(16) << "Interest Rate" << setw(7) << "Term" << endl;
   
    for (int i = 0; i < NUMRECORDS; i++)
    {
        cout << setw(10) << accounts[i].firstName << setw(14) << accounts[i].lastName << setw(10) << accounts[i].balance
            << setw(16) << accounts[i].interestRate << setw(7) << accounts[i].term << endl;
    }
}a


void bubbleSort(CDAccountMod arr[], int length)
{
    CDAccountMod temp;

    for (int i = length - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j].balance > arr[j + 1].balance)
            {
                //Swap the numbers
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}