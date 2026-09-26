// Q4.Given an array, predict if the array contains duplicates or not.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // check flag
    bool flag = false;

    // compare
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }
    if (flag == true)
    {
        cout << "dublicate element contain";
    }
    else
    {
        cout << "No";
    }
}