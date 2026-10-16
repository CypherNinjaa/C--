#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {1, 4, 5, 8, 0, 0, 0, 0, 0, 0};
    vector<int> v2 = {2, 3, 6, 7, 10, 12};

    int i = 3, j = v2.size() - 1, k = v1.size() - 1;
    while (i >= 0 && j >= 0)
    {
        if (v1[i] < v2[j])
        {
            v1[k] = v2[j];
            j--;
        }
        else
        {
            v1[k] = v1[i];
            i--;
        }
        k--;
    }
    while (j >= 0)
    {
        v1[k] = v2[j];
        j--;
        k--;
    }

    for (int x : v1)
        cout << x << " ";
}