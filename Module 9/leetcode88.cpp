
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v1, vector<int> &v2, int m, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (v1[i] > v2[j])
        {
            v1[k] = v1[i];
            i--;
        }
        else
        {
            v1[k] = v2[j];
            j--;
        }
        k--;
    }

    while (j >= 0)
    {
        v1[k] = v2[j];
        j--;
        k--;
    }
}

int main()
{
    vector<int> v1 = {1, 2, 3, 0, 0, 0};
    vector<int> v2 = {2, 5, 6};

    merge(v1, v2, 3, 3);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}
