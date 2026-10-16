#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 4, 3};
    // step 1: find idx
    int idx = -1;
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v.at(i) < v.at(i + 1))
        {
            idx = i;
            break;
        }
    }
    if (idx==-1)
    {
        reverse(v.begin(),v.end());
    }
    
    // step 2;
    reverse(v.begin() + (idx + 1), v.end());
    for (int x : v)
    {
        cout << x<<endl;
    }
    // step3
    swap(v.at(idx), v.at(idx + 1));
    for (int x : v)
    {
        cout << x;
    }
}