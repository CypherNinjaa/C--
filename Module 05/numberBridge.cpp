#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the rows: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i;
    }
    cout << endl;
    m = n - 1;
    int nsp = 1;
    for (int i = 1; i <= m; i++)
    {
        // number
        int a = 1;
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a++;
        }
        // numbers
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            a++;
        }
        nsp += 2;
        // numbers
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}