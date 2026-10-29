#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0) // base case
        return 0;

    return n + sum(n - 1); // work + recursive call
}

int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
    cout << sum(n);
    return 0;
}