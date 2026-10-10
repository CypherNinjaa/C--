#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sort(vector<int> &v, int &numZ,
          int &numO)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) == 0)
        {
            numZ++;
        }
        else
        {
            numO++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < numO)
        {
            v.at(i) = 0;
        }
        else
        {
            v.at(i) = 1;
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
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    int numZ = 0;
    int numO = 0;
    // sort(v.begin(), v.end());
    sort(v, numZ, numO);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}