// Q1. Calculate the product of all the elements in the given array
#include <iostream>
using namespace std;
int main()
{
    int n, product = 1;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // product
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    cout << "Sum: " << product;
}