// Q1. Write a program to print the elements of both the diagonals in a square matrix.
#include <iostream>
#include <vector>
using namespace std;
using namespace std;
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (j == i || i + j == v.size() - 1)
            {
                cout << v[i][j];
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}