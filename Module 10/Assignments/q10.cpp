
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    int rows = v.size();
    int cols = v[0].size();

    vector<int> zeroRows(rows, 0);
    vector<int> zeroCols(cols, 0);

    // Find the rows and columns containing zero
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (v[i][j] == 0)
            {
                zeroRows[i] = 1;
                zeroCols[j] = 1;
            }
        }
    }

    // Set the required rows and columns to zero
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (zeroRows[i] == 1 || zeroCols[j] == 1)
            {
                v[i][j] = 0;
            }
        }
    }

    // Print the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
