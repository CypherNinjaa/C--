// Q2.WAP to find the largest three elements in the array.
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> v = {100, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int max = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    ;
    for (int i = 0; i < v.size(); i++)
    {
        if (max < v.at(i))
        {
            max3 = max2;
            max2 = max;
            max = v.at(i);
        }
        else if (max2 < v.at(i))
        {
            max3 = max2;
            max2 = v.at(i);
        }
        else if (max3 < v.at(i))
        {
            max3 = v.at(i);
        }
    }
    cout << "max : " << max << " ;max 2: " << max2 << ";max 3: " << max3;
}