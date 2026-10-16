#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 2, 4, 3, 4, 1, 6};
    int x = 7;
    for (int i = 0; i < v.size()-1; i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}