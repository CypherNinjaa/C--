#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter the rows of 1st matrix: ";
    cin >> m;
    int n;
    cout << "enter the cols of 1st matrix: ";
    cin >> n;

    int p;
    cout << "enter the rows of 2nd matrix: ";
    cin >> p;

    int q;
    cout << "enter the cols of 2nd matrix: ";
    cin >> q;
    if (n == p)
    {
        int A[m][n];
        int B[p][q];
        cout << "enter the elements of first matrix: " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }
        cout << "enter the elements of second matrix: ";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> B[i][j];
            }
        }
        // resultant mtrix
        int res[m][q];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // res[i][j]=a[i][0]*b[0][j]+ a[i][1]*b[1][j] + ....... n;
                res[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        cout << endl;
        // print
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "matrices can't be multiplied";
    }
}