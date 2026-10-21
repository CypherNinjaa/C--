
#include <iostream>
#include <vector>
using namespace std;
// Q2. Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from(l1, r1) to(l2, r2) 
int main()
{
    vector<vector<int>> A = {
        {1, 2, -3, 4},
        {0, 0, -4, 2},
        {1, -1, 2, 3},
        {-4, -5, -7, 0}};

    int l1 = 1, r1 = 2;
    int l2 = 3, r2 = 3;

    int sum = 0;

    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += A[i][j];
        }
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
