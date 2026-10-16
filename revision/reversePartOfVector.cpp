#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 6, 2, 3, 7, 4};
    // rev(1,4)
    for (int i = 0, j = 2; i < j; i++, j--)
    {
        // v2[i] = v[v.size() - 1 - i];
        swap(v[i], v[j]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}