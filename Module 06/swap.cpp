#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the first number: ";
    cin >> a;
    cout << "enter the second number: ";
    cin >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " "<< b;
}