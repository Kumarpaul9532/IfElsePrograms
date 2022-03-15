/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to input numbers of days and convert it into year,month and days.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    int d = 0, year = 0, mon = 0, days = 0;

    cout << "Enter the number of days : ";
    cin >> d;

    year = d / 365;
    days = d % 365;

    if (days >= 30)
    {
        mon = days / 30;
        days %= 30;
    }

    cout << year << " Years\t" << mon << " Months\t" << days << " days\t" << endl;

    return 0;
}