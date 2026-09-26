#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max;
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

    // compare
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    cout << "max value: " << max;
}