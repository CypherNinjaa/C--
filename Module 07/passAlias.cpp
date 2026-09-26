#include <iostream>
using namespace std;
int swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    int a, b;
    cout << "enter the first number: ";
    cin >> a;
    cout << "enter the second number: ";
    cin >> b;

    // pass by value
    // swap(a, b);

    // pass by reference
    // swap(&a, &b);

       swap(b, a);
    cout << a << " " << b;
}