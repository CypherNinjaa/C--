#include <iostream>
using namespace std;
int main()
{

    int arr[] = {
        1,
        2,
        3,
        4,
        5,
        6,
        3,
        6,
        3,
        6,
        4,
        5,
        6,
        35,
        3,
        56,
        43,
        44};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size;
}