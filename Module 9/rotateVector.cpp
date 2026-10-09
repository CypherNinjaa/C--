#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void reversePart(int i, int j, vector<int> &v)
{
    for (; i <= j; i++, j--)
    {
        swap(v.at(i), v.at(j));
    }
}
void display(vector<int> &v2)
{
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the vector size: ";
    cin >> n;
    cout << "Enter the vector elements: ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }

    // rotate
    int size = v.size();
    int k = 20;
    if (k > size)
    {
        k = k % size;
    }

    cout << "first time" << endl;
    reversePart(0, size - k - 1, v);
    display(v);

    reversePart(size - k, v.size() - 1, v);
    cout << "second time" << endl;
    display(v);

    reversePart(0, v.size() - 1, v);
    cout << "third time" << endl;
    display(v);
}