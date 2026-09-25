#include <iostream>
using namespace std;
int main()
{
    int x = 44;
    int *p = &x;
    // int **a = &p;
    *p = 100;
    cout << &x << endl;
    cout << *p;
    cout << x;
}