// Q2. Find the second largest element in the given Array in one pass.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max, smax;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // max
    max = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    // max
    smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (smax < arr[i] && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    cout << "second largest element: " << smax;
}