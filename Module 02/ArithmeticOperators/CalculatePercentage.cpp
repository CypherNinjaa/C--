// Example : Calculating percentage of 5 subjects float x1 = 90;
// < / x1 can be physics float x2 = 91;
// < / x2 can be chemistry float x3 = 92;
// < / x3 can be maths float x4 = 93;
// < / x4 can be english float x5 = 94;
// < / ohh wait comments ke baare me to bataya hi nahi xD float percent = (x1 + x2 + x3 + x4 + x5) / 5;
// cout << percent;
#include <iostream>
using namespace std;
int main()
{
    float x1, x2, x3, x4, x5, percent;
    x1 = 90;
    x2 = 91;
    x3 = 92;
    x4 = 94;
    x5 = 95;
    percent = (x1 + x2 + x3 + x4 + x5)/5;
    cout<<percent; 
}
