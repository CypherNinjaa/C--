#include <iostream>
using namespace std;
int main()
{
    int x, y;

    // int *p1 = &x;
    // int *p2 = &y;
    int *p1 = &x, p2 = y;
    cout << "enter the 1st number: ";
    cin >> *p1;
    cout << "enter the 1st number: ";
    // cin >> *p2;
    cout << x + y;
}