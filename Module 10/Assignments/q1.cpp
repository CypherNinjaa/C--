#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
    vector<vector<int>> v(5, vector<int>(5, 10));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    // Write a program to add two matrices and save the result in one of the given matrices.
    vector<vector<int>> A = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> B = {
        {4, 5, 8}, {0, 0, 8}, {1, 2, 0}};

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            A[i][j] += B[i][j];
        }
    }
    cout << "Addition: " << endl;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
