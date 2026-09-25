#include <iostream>
using namespace std;
int odd(int n)
{
    if (n % 2 != 0)
    {
        cout << n << " ";
    }
}
int main()
{
    int x, y;
    cout << "Enter the numnber: ";
    cin >> x;
    cout << "Enter the 2nd numnber: ";
    cin >> y;
    for (int i = x; i <= y; i++)
    {
        odd(i);
    }
}