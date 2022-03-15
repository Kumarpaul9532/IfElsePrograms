/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to check whether the number is positive or negative.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check whether the number is positive or negative : ";
    cin >> num;

    if (num > 0)
        cout << "Positive Number ";

    else if (num < 0)
        cout << "Negative Number ";

    else
        cout << "Number is non-negative";

    return 0;
}
