#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 4};
    int *ptr = arr; // giving address
    cout << ptr << endl;
    cout << &arr[0] << endl;
    cout << ptr[0] << endl;
    cout << *ptr << endl;

    // ptr[0] = 8;
    for (int i = 0; i < 4; i++)
    {
        cout << i[ptr] << " ";
    }
    *ptr = 8; // ptr[0] = 8;
    ptr++;
    *ptr = 9;
    ptr--;
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;
}