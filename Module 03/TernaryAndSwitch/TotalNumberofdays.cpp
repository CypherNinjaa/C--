#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the Month number: ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Jan : 31";
        break;
    case 2:
        cout << "Feb : 28";
        break;
    case 3:
        cout << "March : 31";
        break;
    case 4:
        cout << "April : 31";
        break;
    case 5:
        cout << "May : 30";
        break;
    case 6:
        cout << "June : 31";
        break;
    case 7:
        cout << "July : 30";
        break;
    case 8:
        cout << "Aug : 31";
        break;
    case 9:
        cout << "Sep : 31";
        break;
    case 10:
        cout << "Oct : 30";
        break;
    case 11:
        cout << "Nov : 31";
        break;
    case 12:
        cout << "Dec : 31";
        break;
    default:
        cout << "Invalid Month Number";
        break;
    }
}