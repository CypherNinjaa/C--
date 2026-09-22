#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the rows: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << char('A' + i - 1);
    }
    cout << endl;
    m = n - 1;
    int nsp = 1;
    for (int i = 1; i <= m; i++)
    {
        int a = 1;
        // star
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << char('A' + a - 1);
            a++;
        }
        // spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            a++;
        }
        nsp += 2;
        // star
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << char('A' + a - 1);
            a++;
        }
        cout << endl;
    }
}