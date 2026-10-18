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
    // spiral;
    int minR = 0, minC = 0, maxR = m - 1, maxC = n - 1;
    int tne = n * m;
    int count = 0;
    while (minR <= maxR && minC <= maxC)
    {
        // right
        for (int j = minC; j <= maxC && count < tne; j++)
        {
            cout << arr[minR][j] << " ";
            count++;
        }
        minR++;

        // down
        for (int i = minR; i <= maxR && count < tne; i++)
        {
            cout << arr[i][maxC] << " ";
            count++;
        }
        maxC--;

        // left
        for (int j = maxC; j >= minC && count < tne; j--)
        {
            cout << arr[maxR][j] << " ";
            count++;
        }
        maxR--;

        // up
        for (int i = maxR; i >= minR && count < tne; i--)
        {
            cout << arr[i][minC] << " ";
            count++;
        }
        minC++;
    }
}