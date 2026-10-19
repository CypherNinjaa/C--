#include <iostream>
#include <vector>
using namespace std;
void change(int a[])
{
    a[0] = 9;
}
void change2d(int arr[3][3])
{
    arr[0][0] = 9;
}
int main()
{
    // int a[3] = {1, 2, 3};
    // cout << "intial: " << a[0] << endl;
    // change(a);
    // cout << "after change: " << a[0] << endl;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "intial: " << arr[0][0] << endl;
    change2d(arr);
    cout << "after change: " << arr[0][0] << endl;
}