#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 0, 1, 0, 1, 1, 0};

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v.size() - 1; j++)
    //     {
    //         if (v[i] < v.at(j))
    //         {
    //             swap(v[i], v[j]);
    //         }
    //     }
    // }
    int i = 0, j = v.size() - 1;
    while (i < j)
    {

        if (v[j] == 1)
        {
            j--;
        }
        else if (v[i] == 0)
        {
            i++;
        }
        else
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}