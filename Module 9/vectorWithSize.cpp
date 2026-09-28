#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5,7);//initial size = 5, each element has value 7
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout<<v[2];
}