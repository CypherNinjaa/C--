// Q4. WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;
int main()
{
    int r, h;
    cout << "Enter the Radius: ";
    cin >> r;
    cout << "Enter the Height: ";
    cin >> h;

    float volume = 3.14159 * r * r * h;
    cout << "Volume of Cylinder: " << volume << endl;
    return 0;
}