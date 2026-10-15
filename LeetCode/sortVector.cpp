#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, 5, 1};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    int diff = arr[0] - arr[1];
    int flag = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] - arr[i + 1] != diff)
        {
            flag = 0;
        }
        }
    if (flag == 1)
    {
        cout << flag;
    }
    else
    {
        cout << 0;
    }
}