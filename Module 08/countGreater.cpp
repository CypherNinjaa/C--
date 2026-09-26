#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, x;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the element x: ";
    cin >> x;
    int count = 0;
    // compare
    for (int i = 0; i < n; i++)
    {
        if (x < arr[i])
            count++;
    }

    cout << "count value: " << count;
}