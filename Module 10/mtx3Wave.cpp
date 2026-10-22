#include <iostream>
using namespace std;
int main()
{
    const int rows = 3, cols = 3;
    int arr[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr[j][i] << " ";
        }

        // cout << endl;
    }
}