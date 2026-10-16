#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {4, 7, 3, 1,6 ,2};

    for (int i = 0, j = v.size() - 1; i < j; i++, j--)
    {
        // v2[i] = v[v.size() - 1 - i];
        swap(v[i], v[j]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}