#include <iostream>
using namespace std;
// formal parameters
void sum(int x, int y)
{
    cout << "address of x inside sum: " << &x << endl;
    cout << "address of y inside sum: " << &y << endl;
}

int main()
{
    int x;
    int y;
    cout << "address of x: " << &x << endl;
    cout << "address of y: " << &y << endl;
    // actual parameter
    sum(x, y);
}