#include <iostream>
using namespace std;
int area(float r)
{
    return r * r * 3.14;
}
int main()
{
    float radius;
    cout << "Enter the radius: ";
    cin >> radius;
    cout << "area of circle : " << area(radius);
}