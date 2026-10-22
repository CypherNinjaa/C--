// Q7. Rotate a square matrix 90 degrees anti-clockwise.
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows/columns: ";
    if (!(cin >> n) || n <= 0)
    {
        cerr << "Matrix size must be a positive integer.\n";
        return 1;
    }

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    // Transpose, then reverse the order of the rows for anti-clockwise rotation.
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n / 2; ++i)
    {
        swap(matrix[i], matrix[n - 1 - i]);
    }

    for (const auto &row : matrix)
    {
        for (int value : row)
        {
            cout << value << ' ';
        }
        cout << '\n';
    }
    return 0;
}