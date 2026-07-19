// wap to reverse the digits of a given number.
#include <iostream>
using namespace std;
int main()
{
    int num, ld, rev = 0;
    cout << "Enter the number: ";
    cin >> num;
    while (num > 0)
    {
        ld = num % 10;
        num /= 10;
        rev = rev * 10 + ld;
    }
    cout << "reversed: " << rev;
}
