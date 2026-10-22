#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of string: ";
    cin >> n;

    char str[n + 1];

    cout << "Enter the string: ";
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    str[n] = '\0'; // End the string

    cout << str << endl;

    str[0] = 'B';

    cout << str << endl;

    return 0;
}