// wap to sum the digits of a given number.
#include <iostream>
using namespace std;
int main()
{
    int num, ld, sum = 0;
    cout << "Enter the number: ";
    cin >> num;
    int count = 0;
    if (num == 0)
    {
        cout << "Count: 1";
        return 0;
    }
    while (num > 0)
    {
        ld = num % 10;
        num /= 10;
        sum += ld;
    }
    cout << "Count: " << sum;
}