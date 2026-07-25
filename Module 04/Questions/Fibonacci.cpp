// Print the nth fibonacci number.
#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, sum = 0,n;
    cout<<"Enter the terms: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
    }
    

    cout << "Fibonacci: " << b;
}