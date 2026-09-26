#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max, smax;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // max = arr[0];
    max = INT_MIN;
    smax = INT_MIN;
    // max compare
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    // smax compare
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }
    cout << "smax value: " << smax;
}