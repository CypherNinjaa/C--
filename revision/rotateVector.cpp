#include <iostream>
#include <vector>
using namespace std;
void rotate(int i, int j, vector<int> &v)
{
    for (; i < j; i++, j--)
    {
        swap(v[i], v[j]);
    }
}
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}
int main()
{
    vector<int> v = {1, 6, 2, 3, 7, 4};
    int k = 2;
    if (k > v.size())
    {
        k = k % v.size();
    }

    cout << "first time: ";
    int i = 0, j = v.size() - 1 - k;
    rotate(i, j, v);
    display(v);

    cout << endl
         << "second time: ";
    i = v.size() - 2, j = v.size() - 1;
    rotate(i, j, v);
    display(v);

    cout << endl
         << "third time: ";
    i = 0, j = v.size() - 1;
    rotate(i, j, v);
    display(v);
}