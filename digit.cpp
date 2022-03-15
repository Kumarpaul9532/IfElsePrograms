/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to check whether the number is one digit or two digit or three digit.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    int num;
    
    cout << "Enter a number : ";
    cin >> num;

    if (num / 10 == 0)
        cout << "The number has one digit";
    else if (num / 100 == 0)
        cout << "The number has two digit";
    else if (num / 1000 == 0)
        cout << "The number has three digit";
    else
        cout << "The number is having more than three digit";

    return 0;
}
