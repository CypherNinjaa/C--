#include <iostream>
using namespace std;
int main()
{

    int *ptr1 = '\0'; // reserved addres -> 0
    int *ptr2 = 0;
    int *ptr3 = '\0';

    cout << ptr1 << " " << ptr2 << " "<<ptr3<<" "<<endl;

    // '\0' -> null character
    char ch = '\0';
    cout << (int)ch;
}