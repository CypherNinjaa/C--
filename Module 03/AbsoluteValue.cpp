#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter an integer : ";
    cin >> x;
    if (x < 0)
    {
        cout << "Absolute value : "<<-x;
    }
    else
    {
        cout << "it is already in absolute form";
    }
}