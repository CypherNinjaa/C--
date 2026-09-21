#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the lines: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 1)
        {
           
            for (int k = 1; k <= i; k++)
            {
                cout << k << " ";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {

                cout << char(64 + j) << " ";
            }
        }

        cout << endl;
    }
}