#include <iostream>
using namespace std;
void display(int arr[], int size)
{
    // int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void change(int arr[])
{
    arr[0] = 100;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    // accesing the elements of array in another function
    // updation, pass by value/reference?

    display(arr, size);
    change(arr);
    display(arr, size);
}