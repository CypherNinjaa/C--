#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the number: ";
    cin >> x;
    if (x % 5 == 0)
    {
        cout << x << " is divisible by 5";
    }
    else
    {
        cout << x << " not divisible by 5";
    }
}