/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to check whether the year entered by the user is Century Leap Year,
                Leap Year or Century Year or not.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter the year : ";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        if (year % 100 == 0)
            cout << "Century Leap Year";
        else
            cout << "Leap Year ";
    }
    else

        if (year % 100 == 0)
        cout << "Century Year ";
    else
        cout << "Normal Year";

    return 0;
}