#include <iostream>
#include<vector>
using namespace std;
int main()

{
    int m, n;
    cout << "enter the no. of rows: ";
    cin >> m;
    cout << "enter the no. of cols: ";
    cin >> n;
    int arr[m][n];
    int trans[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout << arr[j][i] << " ";
            trans[i][j] = arr[j][i];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}