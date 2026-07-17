#include <iostream>
using namespace std;
int main()
{
    /*
    1 3 5 7 8 10 12 -> 31 Days
    4 6 9 11 -> 30 Days
    2 -> 28 Days
    */
    int x;
    cout << "Enter the Month number: ";
    cin >> x;
    switch (((x <= 7) && (x % 2 != 0)) || ((x >= 8) && (x % 2 == 0)))
    {
    case 1:
        cout << "31";
        break;
    }
    switch (x == 4 || x == 6 || x == 9 || x == 11)
    {
    case 1:
        cout << "30";
        break;
    }
    switch (x)
    {
    case 2:
        cout << "28";
        break;
    }
}