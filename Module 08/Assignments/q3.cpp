// Q3.Find the minimum value out of all elements in the array.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, min;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // max = arr[0];
    min = INT_MAX;

    // compare
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    cout << "min value: " << min;
}