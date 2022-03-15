/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to check whether the number is Odd or Even using conditional operator.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number to check whether the number is Odd or Even : ";
    cin >> num;

    (num % 2 == 0) ? cout << "Even Number " : cout << "Odd Number ";

    return 0;
}