/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to input time in seconds and convert it into Hour,Minutes and Second.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    int t = 0, hr = 0, min = 0, sec = 0;

    cout << "Enter time in Seconds : ";
    cin >> t;

    min = t / 60;
    sec = t % 60;

    if (min >= 60)
    {
        hr = min / 60;
        min %= 60;
    }
    cout << hr << " Hours\t" << min << " Minutes\t" << sec << " Seconds" << endl;

    return 0;
}