#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x = 6;
    int index = -1;
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    v.push_back(10);

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v.at(i) == x)
        {
            index = i;
            break;
        }
    }
    cout << "index: " << index;
}