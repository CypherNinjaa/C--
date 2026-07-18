#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the terms(n): ";
    cin >> n;
    cout << "GP: ";
    // for (int i = 01; i <= (2 * n - 1); i += 2)
    // {
    //     cout << i << " ";
    // }
    // Seprate Variable
    // 4 7 10 13 17
    int a = 1;
    for (int i = 0; i <= n; i++)
    {
        cout << a << " ";
        a = a *2;
    }
}