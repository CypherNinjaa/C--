// Q1. Count the number of elements strictly greater than x.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int x, counter = 0;
    cout << "enter the X: ";
    cin >> x;
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) > x)
        {
            counter++;
        }
    }
    cout << counter << " elements are greater than" << x;
}