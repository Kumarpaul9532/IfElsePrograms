/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to print the second largest number using conditional operator.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{

    float a, b, c, max = 0.0, min = 0.0, sl = 0.0;

    cout << "Enter three numbers : ";
    cin >> a >> b >> c;

    max = (a > b && a > c) ? a : (b > c) ? b
                                         : c;

    min = (a < b && a < c) ? a : (b < c) ? b
                                         : c;

    sl =(a+b+c)-(max + min);
    cout << "Second largest number is " << sl;

    return 0;
}