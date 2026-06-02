// Take two integers input, a and b : a > b, and find the remainder when a is divided by b.
#include <iostream>
using namespace std;
int main()
{
    int a = 8;
    int b = 5;
    // cout << a % b;
    int q = a / b;
    int r = a - (b * q);
    cout << r;
}