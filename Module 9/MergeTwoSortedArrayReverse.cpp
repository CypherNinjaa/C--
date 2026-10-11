
#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &v1, vector<int> &v2)
{
    int i = v1.size() - 1;
    int j = v2.size() - 1;
    int k = v1.size() + v2.size() - 1;

    vector<int> v3(v1.size() + v2.size());

    while (i >= 0 && j >= 0)
    {
        if (v1[i] > v2[j])
        {
            v3[k] = v1[i];
            i--;
        }
        else
        {
            v3[k] = v2[j];
            j--;
        }
        k--;
    }

    while (i >= 0)
    {
        v3[k] = v1[i];
        i--;
        k--;
    }

    while (j >= 0)
    {
        v3[k] = v2[j];
        j--;
        k--;
    }

    return v3;
}

int main()
{
    vector<int> v1 = {1, 4, 5, 8, 8};
    vector<int> v2 = {2, 3, 6, 7, 8, 10, 12};

    vector<int> v3 = merge(v1, v2);

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}
