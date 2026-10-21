
#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<int>> A, int n)
{
    int mid = n / 2;

    // Print middle column elements above the middle row
    for (int i = 0; i < mid; i++)
    {
        cout << "    " << A[i][mid] << endl;
    }

    // Print middle row
    for (int j = 0; j < n; j++)
    {
        cout << A[mid][j] << " ";
    }
    cout << endl;

    // Print middle column elements below the middle row
    for (int i = mid + 1; i < n; i++)
    {
        cout << "    " << A[i][mid] << endl;
    }
}

int main()
{
    vector<vector<int>> A = {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 7},
        {7, 6, 5, 4, 3},
        {8, 7, 6, 5, 4},
        {1, 2, 37, 8, 0}};

    int n = A.size();
    display(A, n);

    return 0;
}
