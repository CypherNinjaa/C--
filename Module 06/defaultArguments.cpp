#include <iostream>
using namespace std;
// formal parameters with default arguments
// default value sare ko dena hi padega
//receive arguments contiguously
void fun(int x=8, bool y=true)
{
    cout << x << " " << y;
}

int main()
{
    int a = 40;
    int b = 80;

    fun(false);
}