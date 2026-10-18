#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the no. of rows: ";
    cin >> m;
    cout << "enter the no. of cols: ";
    cin >> n;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}