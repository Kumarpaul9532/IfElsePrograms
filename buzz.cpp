/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to check whether the number is Buzz or not.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check whether the number is Buzz or not : ";
    cin >> num;

    if (num % 10 == 7 || num % 7 == 0)
        cout << "Buzz number ";
    else
        cout << "Not a Buzz number ";

    return 0;
}