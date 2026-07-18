#include <iostream>
using namespace std;
int main()
{
    // n n-3
    int n;
    cout << "Enter the terms: ";
    cin >> n;
    for (int i = n; i > 0; i = i - 3)
    {
        cout << i << " ";
    }
}