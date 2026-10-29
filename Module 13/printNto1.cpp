#include <iostream>
using namespace std;

void printn(int n)
{
    if (n == 0)     //base case
        return;

    cout << n << endl;      //work
    printn(n - 1);      //call
}

int main()
{
    printn(4);
}