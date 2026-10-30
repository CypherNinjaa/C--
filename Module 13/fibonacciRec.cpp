#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    // sum=a+b,a=b,b=a;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cout << "enter the base: ";
    cin >> n;
    cout << fibo(n);
    return 0;
}