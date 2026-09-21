#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the n: ";
    cin >> n;
    // int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " ";
        }
        // nsp--;
        for (int k = 1; k <= n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}