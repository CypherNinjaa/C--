#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void reverse(int i, int j, vector<int> &v)
{
    for (; i < j; i++, j--)
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

    // swap
    // using for loop
    reverse(0, 2, v);
    // print
    display(v);
}