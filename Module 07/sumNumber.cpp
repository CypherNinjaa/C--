#include <iostream>
using namespace std;
int main()
{
    // int x = 10;
    // int y = 10;
    // int *p1 = &x;
    // int *p2 = &y;
    // cout << *p1 + *p2;

    int x, y;
    int *p1 = &x;
    int *p2 = &y;
    cout << "enter the 1st number: ";
    cin >> *p1;
    cout << "enter the 1st number: ";
    cin >> *p2;
    cout << *p1 + *p2;
}