#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (a == 0)
    {
        return 0;
    }

    if (b == 0)
    { // base case
        return 1;
    }
    return a * power(a, b - 1); //  recursive call
    // S.C=O(n)stack frames
}

int main()
{
    int a, b;
    cout << "enter the base: ";
    cin >> a;
    cout << "enter the exponent: ";
    cin >> b;
    cout << power(a, b);
    return 0;
}