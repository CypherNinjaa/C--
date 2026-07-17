#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter the character: ";
    cin >> x;
    int y = (int)x;
    // cout<<y;
    if (y >= 97 && y <= 122)
    {
        cout << x << "-> this is an alphabet (lowercase)";
    }
    else if (y >= 65 && y <= 90)
    {
        cout << x << "-> this is an alphabet (Uppercase)";
    }
    else
    {
        cout << "it is not an alphabet";
    }
}