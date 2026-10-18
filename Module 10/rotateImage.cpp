#include <iostream>
#include <vector>
using namespace std;
int main()

{
    int n;
    cout << "enter the no. of rows/cols: ";
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
    // transpose in the same matrix;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
    // rotate 90 degree in the same matrix;
    for (int i = 0; i < n; i++)
    {
        int j = 0, k = n - 1;
        while (j < k)
        {
            swap(arr[i][j], arr[i][k]);
            j++;
            k--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}