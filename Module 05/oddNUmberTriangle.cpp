#include <iostream>
using namespace std;
int main()
{
    // odd number sqaure
    // 1
    // 12
    // 123
    // 1234
    int n;
    cout << "enter the rows: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= 2 * i - 1; j += 2)
        // {
        //     cout << j << " ";
        // }
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }
}