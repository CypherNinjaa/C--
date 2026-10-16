#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> v = {1, -2, 3, -5, -4, 6, 8, 0};

    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] >= 0)
        {
            i++;
        }
        else if (v[j] < 0)
        {
            j--;
        }
        else
        {
            swap(v[i], v[j]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}