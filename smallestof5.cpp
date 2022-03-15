/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to print smallest of five numbers.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{

    float a, b, c, d, e;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third number : ";
    cin >> c;
    cout << "Enter fourth number : ";
    cin >> d;
    cout << "Enter fifth number : ";
    cin >> e;

    if (a == b && b == c && c == d && d == e)
        cout << "All the numbers are equal";
    else if (a < b && a < c && a < d && a < e)
        cout << a << " is smallest ";
    else if (b < c && b < d && b < e)
        cout << b << " is smallest ";
    else if (c < d && c < e)
        cout << c << " is smallest ";
    else if (d < e)
        cout << d << " is smallest ";
    else
        cout << e << " is smallest ";

    return 0;
}