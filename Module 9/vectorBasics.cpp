#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // u need not mention size;
    vector<int> v;
    // insertion / input do not use []
    v.push_back(6);
    cout <<"size: "<< v.capacity() << endl;
    v.push_back(1);
    cout <<"size: "<< v.capacity() << endl;
    // v[1] = 1; // dont use this
    v.push_back(4);
    cout <<"size: "<< v.capacity() << endl;
    v.push_back(10);
    cout <<"size: "<< v.capacity() << endl;
    v.push_back(44);
    cout <<"size: "<< v.capacity() << endl;
    // v[0]=6 -> not possible , segmentation fault

    // if you want to access/update you can use sqaure bracket

    // cout << v[0] << " ";
    // cout << v[1] << " ";
    // cout << v[2] << " ";
    // cout << v[3] << " ";
}