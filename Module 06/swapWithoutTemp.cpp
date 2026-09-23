#include <iostream>
using namespace std;
void swap(int a,int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
}
int main()
{
    int a, b;
    cout << "enter the first number: ";
    cin >> a;
    cout << "enter the second number: ";
    cin >> b;
    swap(a,b);
    // cout << a << " " << b;
}