// Q3. Find the first non-repeating element in the array.
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {4, 1, 2, 4, 7};

    int element = 0;
    for (int i = 0; i < 5; i++)
    {
        int counter = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                counter++;
            }
        }
        if (counter == 1)
        {
            element = arr[i-1];
            break;
        }
    }
    cout << element;
}