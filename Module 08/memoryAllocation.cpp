#include <iostream>
using namespace std;
int main()
{

    int arr[5];
    cout << "array address: " << &arr << endl;
    cout << arr << endl;    //array address = first element address
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
}