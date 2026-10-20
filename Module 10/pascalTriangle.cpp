#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascal(int numsrows)
{
    int m = numsrows;
    vector<vector<int>> v(m);

    // for (int i = 0; i < m; i++)
    // {
    //     v[i].assign(i + 1, 0);
    // }

    // generate values
    for (int i = 0; i < m; i++)
    {
        v[i].assign(i + 1, 0);
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }   
        }
    }
    return v;
}
int main()
{
    vector<vector<int>> v = pascal(4);

    // print pascal
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}