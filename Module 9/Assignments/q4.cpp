// Q4. Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 2, 4, 7};
    int sumE = 0, sumO = 0;
    for (int i = 0; i < 5; i++)
    {
        // sum of even
        if (arr[i] % 2 == 0)
        {
            sumE += arr[i];
            // sumof odd
        }
        else
        {
            sumO += arr[i];
        }
    }
    // No unsorted pair found
    cout << "Diff: "<<sumE-sumO << endl;
    return 0;
}