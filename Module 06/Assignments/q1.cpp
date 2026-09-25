#include <iostream>
using namespace std;
int square(int n)
{
    return n * n;
}
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        cout << "sqaure of " << i << " = " << square(i) << endl;
    }
}