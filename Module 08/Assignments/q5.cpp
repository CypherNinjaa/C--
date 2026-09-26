#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int expected = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == expected)
        {
            expected++;
        }
        else if (arr[i] > expected)
        {
            break;
        }
    }

    cout << "Smallest missing positive element: "
         << expected;

    return 0;
}