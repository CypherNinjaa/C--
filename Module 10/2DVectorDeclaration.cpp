#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v1(5, 2);
    // int arr[2][4];
    vector<vector<int>> v(3, vector<int>(40, 2));
    cout << "vector size:" << v.size() << endl;
    cout << "column size:" << v[1].size() << endl;
    cout << v[2][2] << endl;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}