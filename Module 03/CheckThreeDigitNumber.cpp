#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the number: ";
    cin >> x;
    if (x >=100 && x<=999)
    {
        cout << x << " is a three digit number";
    }
    else
    {
        cout << x << " is not a three digit number";
    }
}