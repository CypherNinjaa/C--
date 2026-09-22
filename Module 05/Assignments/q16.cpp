#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the rows: ";
    cin >> n;

    for (int j = 1; j <= n; j++)
    {
        cout << j;
    }
    for (int k = n - 1; k >= 1; k--)
    {
        cout << k;
    }
    cout << endl;
    m = n - 1;
    int nsp = 1;
    for (int i = 1; i <= m; i++)
    {
        int a = 1;
        // inc number
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << j;
            a++;
        }
        // spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;
        // dec number
        for (int j = a - 1; j >= 1; j--)
        {
            cout <<j;
            a++;
        }
        cout << endl;
    }
}