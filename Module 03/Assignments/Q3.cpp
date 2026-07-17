// Q3. Find the output for this code. Let input:- 2 3
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    // x = 2 and y = 3;
    x += y; // -> x= x+y => x=5
  
    x -= y; //x = x-y; => x=2
   
    x %= y; //x = x%y => 2%3=> 2
    
    cout << x; //x = 2
}
/*
PTO: 
x -> 5
x -> 2
x -> 2
*/