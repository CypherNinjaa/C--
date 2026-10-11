#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sort01(vector<int> &v)
{
    int numZ = 0;
    int numO = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) == 0)
            numZ++;
        else
            numO++;
    }
    // filling elements
    for (int i = 0; i < v.size(); i++)
    {
        if (i < numZ)
            v.at(i) = 0;
        else
            v.at(i) = 1;
    }
}
void sort(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v.at(j) == 1)
        {
            j--;
        }

        else if (v.at(i) == 0)
        {
            i++;
        }
        else
        {
            swap(v.at(i), v.at(j));
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);

    // sort(v.begin(), v.end());
    // sort01(v);
    // second method.
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}