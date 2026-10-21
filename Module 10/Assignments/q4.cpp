
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// Q4. Write a program to print the row number having the maximum sum in a given matrix.
int main()
{
    vector<vector<int>> A = {
        {1, 3, 5, 7}, {3, 4, 7, 8}, {1, 4, 12, 3}};
    int max = INT_MIN, rows = 0;
  
    for (int i = 0; i < A.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < A[i].size(); j++)
        {
            sum += A[i][j];
        }
        if (sum > max)
        {
            max = sum;
            rows = i;
        }
    }

    cout << "rows = " << rows << endl;

    return 0;
}
