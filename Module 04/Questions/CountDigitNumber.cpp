// wap to count the digits of a given number.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int count = 0;
    // for (int i = 0; i < num; i++)
    // {
    //     num /= 10;
    //     count++;
    // }
    if (num == 0)
    {
        cout << "Count: 1";
        return 0;
    }
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    cout << "Count: " << count;
}