#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the line: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // number
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int l = 1; l <= i - 1; l++)
        {
            cout << l;
        }
        cout << endl;
    }
}