// Write a program to print the matrix in wave form
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}