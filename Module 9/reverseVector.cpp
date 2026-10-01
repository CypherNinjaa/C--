#include <iostream>
#include <vector>
using namespace std;
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
    vector<int> v2(v.size());
    // reverse order
    for (int i = 0; i < v2.size(); i++)
    {

        v2[i] = v[v.size() - 1 - i];
    }
    // print
    display(v2);
}