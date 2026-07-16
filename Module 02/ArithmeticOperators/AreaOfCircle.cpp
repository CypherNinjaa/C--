#include <iostream>
using namespace std;
int main()
{
    // float r, pi, area;
    // pi = 3.1415;
    // r = 8;
    // area = pi * (r * r);
    // cout << area;
    float radius;
    cout << "Enter the radius:";
    cin >> radius;
    float area = 3.1415 * radius * radius;
    cout << "Area : "<<area<<endl;
}