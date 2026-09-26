#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sum
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum: " << sum;
}