// Q6. Find the unique number in a given Array where all the elements are being repeated twice with onen value being unique.
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 2, 1, 1, 20};
    int count = 0;
    int unique = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == unique)
        {
            count++;
        }
        else
        {
            unique = arr[i];
        }
    }
    cout << "unique element count: " << count;
}