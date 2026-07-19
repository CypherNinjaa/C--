// print the sum of series:
// 1-2+3-4+5-6......n.
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;

    cout << "Enter the number: ";
    cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum = sum + i;
    //     }
    //     else
    //     {
    //         sum = sum - i;
    //     }
    // }
    // for even pair:
    if (num % 2 == 0)
        sum = -num / 2;
    else
        sum = -num / 2 + num;
    cout << "Sum: " << sum;
}