/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : WAP to calculate profit or loss precent.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

int main()
{
    float sp, cp, profit, loss, proper = 0.0, lossper = 0.0;

    cout << "Enter sale price : ";
    cin >> sp;
    cout << "Enter cost price : ";
    cin >> cp;

    if (sp == cp)
        cout << "\nNeither Loss nor Profit ";

    else if (sp > cp)
    {
        profit = sp - cp;
        proper = (profit / cp) * 100;
        cout << "\nProfit = " << profit << endl;
        cout << "Profit Percent = " << proper << endl;
    }

    else
    {
        loss = cp - sp;
        lossper = (loss / cp) * 100;
        cout << "\nLoss = " << loss << endl;
        cout << "Loss Percent = " << lossper << endl;
    }
    return 0;
}