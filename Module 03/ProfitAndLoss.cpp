#include <iostream>
using namespace std;
int main()
{
    int sp, cp, profit, loss;
    cout << "Enter the CP: ";
    cin >> cp;
    cout << "Enter the SP: ";
    cin >> sp;
    if (cp < sp)
    {
        cout << "you have made a profit of :" << sp - cp;
    }
    else if (sp == cp)
    {
        cout << "you have not done any profit or loss";
    }
    else
    {
        cout << "oh, you have a made a loss of :" << cp - sp;
    }
}