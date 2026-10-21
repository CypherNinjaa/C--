
#include <iostream>
#include <vector>
using namespace std;
// Q3. Write a C++ program to find the largest element of a given 2D array of integers
int main()
{
    vector<vector<int>> A = {
        {1, 3, 4, 6}, {2, 4, 5, 7}, {3, 5, 6, 8}, {4, 6, 7, 9}};
    int max = A[0][0];
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
        }
    }

    cout << "largest element = " << max << endl;

    return 0;
}
