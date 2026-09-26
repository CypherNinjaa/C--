#include <iostream>
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

    cout << "enter the x element to search: ";
    cin >> x;
    // serach
    // check mark
    bool flag = false;
    // false -> not present
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "element is present";
    }
    else
    {
        cout << "element is not present";
    }
}