#include <iostream>
#include<algorithm>
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

    // swap
    // int i = 0, j = v.size() - 1;
    // while (i <= j)
    // {
    //     // swap v[i] and v[j]
    //     // a = a + b;
    //     // b = a - b;
    //     // a = a - b;
    //     v.at(i) = v.at(i) + v.at(j);
    //     v.at(j) = v.at(i) - v.at(j);
    //     v.at(i) = v.at(i) - v.at(j);
    //     i++;
    //     j--;
    // }

    // using for loop
    for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        v.at(i) = v.at(i) + v.at(j);
        v.at(j) = v.at(i) - v.at(j);
        v.at(i) = v.at(i) - v.at(j);
    }

    // reverse(v.begin(),v.end());
    // print
    display(v);
}