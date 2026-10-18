#include <iostream>
using namespace std;
int main()
{
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // rows -> 3 idx-> 0-2
    // cols -> 3 idx-> 0-2

    // arr[0][0] = 4;
    // arr[1][2] = 8;
    cout << arr[1][0] << endl;
    cout << arr[1][2];
}