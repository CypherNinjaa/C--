#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter the character: ";
    cin >> x;
    int y = (int)x;
    // cout<<y;
    if ((y >= 97 && y <= 122) || (y >= 65 && y <= 90))
    {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        {
            cout << "it is a vowel";
        }
        else
        {
            cout << "it is a consonant";
        }
    }
    else
    {
        cout << "it is not an alphabet";
    }
}