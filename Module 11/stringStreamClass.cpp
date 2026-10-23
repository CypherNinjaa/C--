#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    string str = "palak love vikash and both love each other";
    stringstream ss(str);
    string temp;

    while (ss >> temp)
    {
        cout << temp << endl;
    }
}
