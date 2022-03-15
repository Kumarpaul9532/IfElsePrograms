/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to check whether the number is odd or even.
   IDE        :  VS Code             */
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number to check whether the number is Odd or Even : ";
    cin >> num;

    if (num % 2 == 0)
        cout << "The number is Even ";
    else
        cout << "The number is Odd ";

    return 0;
}