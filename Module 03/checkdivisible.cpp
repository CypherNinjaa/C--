#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the +ve integer: ";
    cin >> x;
    // if ((x % 3 == 0 || x % 5 == 0) && x % 15 != 0)
    // {
    //     cout << "it is divisible by 3 0r 5 but not by 15";
    // }
    // else
    // {
    //     cout << "Not matching the condition";
    // }
    if (x % 5 == 0 || x % 3 == 0)
    {
        if (x % 15 != 0)
        {
            cout << "it is divisible by 3 0r 5 but not by 15";
        }
        else
        {
            cout << "Not matching the condition";
        }
    }
    else
    {
        cout << "Not matching the condition";
    }
}