#include <iostream>
using namespace std;

int fact(int n)
{
    // base case
    if (n == 1 || n == 0)
    {
        return 1;
    }
    // int ans = n * fact(n - 1);
    return n * fact(n - 1);
}
int main()
{
    cout << fact(4);
}