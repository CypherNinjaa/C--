
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 3;

    vector<vector<int>> v(n, vector<int>(n, 0));

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right)
    {
        // Left to right
        for (int j = left; j <= right; j++)
            v[top][j] = num++;
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++)
            v[i][right] = num++;
        right--;

        // Right to left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                v[bottom][j] = num++;
            bottom--;
        }

        // Bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                v[i][left] = num++;
            left++;
        }
    }

    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j];
            if (j < n - 1)
                cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}
