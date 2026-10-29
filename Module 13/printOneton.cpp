#include <iostream>
using namespace std;

void printn(int n)
{
    if (n == 0) // base case
        return;
    printn(n - 1);     // call
    cout << n << endl; // work
    // printn(n - 1);     // call
}

int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
    printn(n);
}