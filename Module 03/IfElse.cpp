#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the number: ";
    cin >> x;
    if (x % 2 == 0)
    {
        cout << x << " is a even number";
    }
    else
    {
        cout << x << " is a odd number";
    }
}