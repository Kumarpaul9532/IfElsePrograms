/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to check whether the year entered by the user is Leap Year or not.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;
int main()
{
    int year;

    cout << "Enter the year to check whether the year is Leap year or not : ";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        cout << year << " is Leap year";
    else
        cout << year << " is not a Leap year ";

    return 0;
}
