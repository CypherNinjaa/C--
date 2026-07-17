#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "enter the side of triangle (seprated with space): ";
    cin >> x >> y >> z;
    if ((x + y > z) && (y + z > x) && (x + z > y))
    {
        cout << "They can be the side of triangle";
    }
    else
    {
        cout << "Invalid triangle";
    }
}