/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to print the second largest number without using conditional and if else
                statement.
   IDE        :  VS Code             */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, sl = 0.0, maxi = 0.0, mini = 0.0;

    cout << "Enter three numbers : ";
    cin >> a >> b >> c;

    maxi = max(a, max(b, c));
    mini = min(a, min(b, c));

    sl = (a + b + c) - (maxi + mini);
    cout << "Second largest number is " << sl;

    return 0;
}