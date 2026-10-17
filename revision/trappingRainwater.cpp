#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> &height)
{
    int n = height.size();
    // previous greatest element
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])
        {
            max = height[i];
        }
    }
    // next greatest element; -> prev as next

    prev[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (max < prev[i])
        {
            prev[i] = max;
        }
        if (max < height[i])
        {
            max = height[i];
        }
    }

    // calculating water
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        if (height[i] < prev[i])
        {
            water += (prev[i] - height[i]);
        }
    }
    return water;
}
int main()
{
    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int water = trap(v);
    cout << water;
}