// Q5. Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 2, 4, 7};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] += 10;
        }
        else
        {
            arr[i] = 2 * arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}