#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &v1, vector<int> &v2)
{
    vector<int> v3;
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1.at(i) < v2.at(j))
        {
            v3.push_back(v1.at(i));
            i++;
        }
        else if (v1.at(i) > v2.at(j))
        {
            v3.push_back(v2.at(j));
            j++;
        }
        else
        {
            v3.push_back(v1.at(i));
            i++;
            v3.push_back(v2.at(j));
            j++;
        }
    }
    while (i < v1.size())
    {
        v3.push_back(v1.at(i));
        i++;
    }

    while (j < v2.size())
    {
        v3.push_back(v2.at(j));
        j++;
    }
    return v3;
}
int main()
{
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    v1.push_back(8);

    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(10);
    v2.push_back(12);

    vector<int> v3 = merge(v1, v2);
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3.at(i) << " ";
    }
}
