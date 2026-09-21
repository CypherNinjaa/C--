#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}